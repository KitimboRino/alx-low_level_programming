0x0A. C - argc, argv

**How to Use Arguments Passed to Your Program:**

When you run a C program, you can pass arguments to it from the command line. These arguments are stored in the `argv` array, and you can access them in your `main` function. Here's a brief explanation of how to use them:


#include <stdio.h>

int main(int argc, char *argv[]) {
    // argc is the count of arguments (including the program name itself)
    // argv is an array of strings containing the arguments

    printf("Program name: %s\n", argv[0]);

    // You can access other arguments using argv[index], e.g., argv[1], argv[2], etc.
    if (argc > 1) {
        printf("First argument: %s\n", argv[1]);
    }

    return 0;
}


When you run this program and provide arguments, it will display the program name and any additional arguments you pass.

**Two Prototypes of `main` and When to Use Each:**

In C, there are two common prototypes for the `main` function:

1. `int main(void)`
   - This version of `main` doesn't accept any command-line arguments.
   - It's used when your program doesn't need any arguments from the command line.

2. `int main(int argc, char *argv[])` or `int main(int argc, char **argv)`
   - This version of `main` accepts command-line arguments.
   - It's used when your program needs to process arguments provided when running the program.

You choose which `main` prototype to use based on whether your program needs to receive and process command-line arguments. If your program doesn't require any arguments, you can use the first prototype. If it needs to handle command-line arguments, use the second prototype.

**Using `__attribute__((unused))` or `(void)` to Compile Functions with Unused Variables or Parameters:**

You can use either of these techniques to indicate to the compiler that you intentionally have unused variables or parameters in your function and that it shouldn't generate warnings about them.

1. Using `__attribute__((unused))`:
   - You can annotate a variable or parameter with `__attribute__((unused))` to tell the compiler that you know it's unused, but you want to keep it for future use.
   - Here's an example:
     
     void myFunction(int unused_variable __attribute__((unused))) {
         // You can use this variable later without compiler warnings.
     }
     

2. Using `(void)`:
   - You can cast an unused variable or parameter to `(void)` to indicate that you intentionally don't use it.
   - Here's an example:
     
     void myFunction(int unused_variable) {
         (void)unused_variable; // Cast to void to silence compiler warnings.
     }
     

Both methods serve the same purpose, which is to prevent compiler warnings about unused variables or parameters. Use the one that you find more readable or suitable for your codebase.
