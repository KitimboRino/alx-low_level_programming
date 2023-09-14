0x04. C - More functions, more nested loops
What is a function and how do you use functions
A function in programming is a self-contained block of code that performs a specific task or operation. Functions are used to modularize and organize code, making it more readable, maintainable, and reusable.

You use functions by declaring them, defining their behavior, and then invoking (calling) them in your code. Functions typically have a name, parameters (if any), a return type (if any), and a body that contains the code to be executed.

To use a function, you call it by its name and provide any required arguments. For example:
int result = add(2, 3); // Calling a function named "add" with arguments 2 and 3

What is the difference between a declaration and a definition of a function
     - 	A declaration of a function tells the compiler about the function's name, return type, and the types of its parameters (if any). It serves as a promise that the function will be defined somewhere else in the code.
A definition of a function provides the actual implementation of the function, including its body, which contains the code to be executed. A function can be declared multiple times, but it should be defined only once.


What is a prototype?
A prototype is a declaration of a function that provides the necessary information about the function's name, return type, and the types of its parameters. It serves as a forward declaration, allowing you to use a function in your code before its actual definition.

Prototypes are typically placed at the beginning of a program or in header files to inform the compiler about the functions available for use.



Scope of variables
Scope refers to the region of code where a variable can be accessed and used. In C, there are several types of variable scope:

Block scope: Variables declared within a block (enclosed by curly braces) are only accessible within that block.
Function scope: Variables declared within a function are accessible within that function.

File scope (global): Variables declared outside of any function or block are accessible throughout the entire file where they are declared.

Static scope: Variables declared as static have file scope but are limited to the file in which they are defined.
What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
-Wall: Enables a wide range of warning messages to help catch potential issues in your code during compilation.
-Werror: Treats compiler warnings as errors, causing compilation to fail if any warnings are issued.
-pedantic: Enforces strict adherence to the C standard and disables compiler-specific extensions.

-Wextra: Enables additional warning messages beyond what -Wall provides.
-std=gnu89: Specifies the C standard to be used for compilation. In this case, it specifies the GNU C89 (ANSI C) standard.


What are header files and how to use them with #include
Header files are files in C and C++ that contain declarations, prototypes, and macro definitions for functions, variables, and data types. They are used to share information between multiple source files.
To use a header file in your source code, you include it using the #include preprocessor directive. For example:


#include <stdio.h> // Includes the standard input-output header file
You can create your own header files with custom declarations and include them in your source files using #include. Header files typically have a .h file extension.


Example of a custom header file (e.g., myheader.h):
// myheader.h
int add(int a, int b); // Function prototype declaration

Example of using the custom header file in your source code:
#include "myheader.h" // Include your custom header file
This allows you to use the add function in your source code even if its actual implementation is in a different source file.

