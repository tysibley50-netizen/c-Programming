The compiler reads your file **top to bottom, one statement at a time**, and it keeps a running list of every name it has seen so far. That's why `average` caused an error earlier. Here's how it goes through your code.

**1. The preprocessor step**
```c
#include <stdio.h>
```
Before real compiling starts, this line is replaced with the contents of the `stdio.h` header. That header declares `printf` and `scanf`, so the compiler knows they exist and can accept your calls to them.

**2. The function**
```c
int main(void) {
```
The compiler notes that you're defining a function called `main`, which takes nothing and returns an `int`. Everything between `{` and the matching `}` is its body.

**3. Declarations: adding names to its list**
```c
int days = 0;
float hours[days];
int i;
float total = 0.0;
float average = total / days;
```
Each time the compiler sees a declaration, it adds that name and type to its list. From that line on, you can use the name. Before it, you can't. This is why your earlier `printf` using `average` failed: the name wasn't on the list yet.

**4. Statements: checking they make sense**
```c
scanf("%d", &days);
if (days > 30) return 0;
total += hours[i];
```
For each statement, the compiler checks that every name is on its list, that the types fit (adding a `float` to a `float` is fine), and that the syntax is correct (semicolons, matching parentheses and braces). It doesn't run anything or know what the user will type.

**5. Loops**
```c
for (i = 0; i < days; i++) { ... }
```
The compiler sees a loop, checks the three parts (start, condition, step) and the body, and turns it into machine instructions for "repeat this block while the condition is true." It doesn't repeat anything itself.

**6. The array size**
```c
float hours[days];
```
This is a **variable-length array**. The compiler can't know the size, since `days` only gets its value when the program runs. So it generates code that reserves the space at that moment. This feature is part of the C99 standard, which is why it works with `gcc`.

**7. Ending**
```c
return 0;
}
```
The compiler checks that the return type matches (`int`) and closes the function. Then it translates everything into machine code and links in the real `printf` and `scanf` code from the standard library.

**Compile time vs. run time**

| Compile time (compiler) | Run time (your program) |
|---|---|
| Checks names, types, syntax | Asks the user for input |
| Translates code to machine instructions | Fills the array, loops, calculates |
| Reports errors like `undeclared` | Reports nothing; may misbehave if the logic is wrong |

The compiler catches mistakes in how you *wrote* the code (like using `average` too early), but it can't catch logic mistakes like swapped `<` and `>`. Those only show up when you run the program.
