0x05. C - Pointers, arrays and strings
1. What are pointers and how to use them:
   - Pointers are variables that store memory addresses as their values. They are used to manipulate and manage memory in programs.
   - To declare a pointer, you use the asterisk (*) symbol, followed by the data type it will point to. For example:
      int *ptr; // Declares a pointer to an integer
   - You can assign the memory address of a variable to a pointer using the address-of operator (&):
     int x = 42;
   int *ptr = &x; // ptr now points to the memory location of x

   - To access the value pointed to by a pointer, you use the dereference operator (*):
     int y = *ptr; // y now contains the value 42


   - Pointers are often used for dynamic memory allocation and working with data structures like linked lists and arrays.


2. What are arrays and how to use them:
   - Arrays are collections of elements of the same data type stored in contiguous memory locations.
   - To declare an array, specify the data type and the number of elements it will hold:
     int myArray[5]; // Declares an integer array with 5 elements
   - You can initialize an array at the time of declaration:
      int myArray[] = {1, 2, 3, 4, 5}; // Initializes an array with values
   - Accessing elements in an array is done using indexing, starting at 0:
      int element = myArray[2]; // Accesses the third element (with index 2)
   - Arrays are used to store collections of data, such as lists of numbers or strings.
3. Differences between pointers and arrays:
   - Pointers are variables that store memory addresses, while arrays are collections of elements stored in contiguous memory locations.
   - Pointers can be used to manipulate and traverse arrays. They can point to individual array elements or dynamically allocated memory.
   - Arrays are fixed in size once declared, while pointers can be reassigned to point to different memory locations.
   - Arrays provide easy access to their elements using indexing, while pointers require dereferencing to access the values they point to.


4. How to use strings and how to manipulate them:
   - In C and C++, strings are typically represented as character arrays (char arrays) terminated by a null character '\0'.
   - You can declare and initialize strings like this:
     char myString[] = "Hello, World!";
   - You can manipulate strings using standard library functions like `strlen()`, `strcpy()`, `strcat()`, `strcmp()`, etc.
   - Be cautious when manipulating strings to avoid buffer overflows and memory errors.


5. Scope of variables:
   - The scope of a variable refers to where in the code it can be accessed.
   - Local variables are defined within a specific function or block and can only be accessed within that scope.
   - Global variables are declared outside of any function and can be accessed throughout the entire program.
   - Static variables, declared using the `static` keyword, have a limited scope but retain their values between function calls.
   - The scope of a variable determines its visibility and lifetime. Local variables are usually preferred for encapsulation and avoiding naming conflicts.
