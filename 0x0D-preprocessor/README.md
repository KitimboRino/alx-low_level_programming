0x0D. C - Preprocessor
Macros in C are a way to define reusable code fragments or constants. 
They are processed by the preprocessor before the actual compilation of your code. 
Macros are often defined using the #define directive and can take arguments.

Defining Macros:
To define a simple macro without arguments:

#define PI 3.14159265359
To define a macro with arguments (a function-like macro):

#define SQUARE(x) ((x) * (x))
Using Macros:
You can use macros throughout your code:

double area = PI * SQUARE(radius);
Common Predefined Macros:
There are several common predefined macros in C. Some of the most commonly used ones include:
__FILE__: Expands to the current source file's name.
__LINE__: Expands to the current line number in the source code.
__FUNCTION__ (C++ only) or __func__ (C99 and later): Expands to the current function's name.
__DATE__: Expands to a string literal representing the compilation date.
__TIME__: Expands to a string literal representing the compilation time.
Include Guards for Header Files:

Header files can be included multiple times in a program, leading to redefinition errors. To prevent this, you can use include guards. 
These are conditional directives that ensure a header file is included only once.
// myheader.h
#ifndef MYHEADER_H
#define MYHEADER_H
// Content of the header file
#endif // MYHEADER_H
This ensures that if MYHEADER_H is not defined (which is the case the first time the header is included), the contents of the header are processed. If the header is included again in the same translation unit, the MYHEADER_H will be defined, and the preprocessor will skip the contents.
In summary, macros in C are used to define reusable code fragments or constants, and you can define your own macros using #define. Common predefined macros provide information about the code being compiled. To prevent multiple inclusions of header files, you can use include guards, as shown in the example.

