Difference Between Automatic and Dynamic Allocation:

Automatic Allocation (Stack):
  - Variables allocated on the stack are called "automatic" or "local" variables.
  - Memory is automatically allocated and deallocated when entering and exiting a function or block.
  - The lifetime of these variables is limited to the scope in which they are defined.
  - Stack allocation is fast but limited in size and scope.


Dynamic Allocation (Heap):
  - Dynamic allocation refers to allocating memory on the heap (also known as the free store).
  - Memory is allocated during program execution and must be explicitly deallocated to avoid memory leaks.
  - The lifetime of dynamically allocated memory is not tied to a specific scope and can be managed as needed.
  - Dynamic allocation is more flexible but can be slower and requires manual memory management.

malloc and free:

- `malloc` is a C library function that stands for "memory allocation." It is used to allocate a block of memory on the heap.
  void *malloc(size_t size);
  - `malloc` takes the size in bytes as an argument and returns a pointer to the allocated memory if successful, or `NULL` if it fails to allocate memory.


- `free` is used to deallocate memory previously allocated by `malloc`. It releases the memory back to the heap, preventing memory leaks.


  void free(void *ptr);

Why and When to Use malloc:

You should use `malloc` when:

1. You need to allocate memory whose size is determined at runtime and can't be known at compile-time.
2. You want memory that has a longer lifetime than local variables (e.g., data that needs to persist across function calls).
3. You want to allocate memory for dynamic data structures like arrays, linked lists, or trees.


Common scenarios for using `malloc` include:
- Storing variable-sized data.
- Creating dynamic arrays.
- Managing memory for complex data structures.


Using Valgrind to Check for Memory Leaks:

Valgrind is a powerful tool for detecting memory-related errors, including memory leaks. Here's how to use it to check for memory leaks in a C program:


1. Compile your program with debugging information. For example, if your program is named `my_program.c`:
   gcc -g -o my_program my_program.c


2. Run your program with Valgrind:
   valgrind --leak-check=full ./my_program


   Valgrind will execute your program and monitor memory allocation and deallocation.


3. Valgrind will provide a report indicating memory leaks, if any. It will show you where the leaks occurred and details about the leaked memory.

4. To fix memory leaks, make sure to use `free` to deallocate memory for dynamically allocated objects when you're done with them.

Valgrind helps identify memory issues in your code, making it a valuable tool for debugging and ensuring your programs use memory efficiently and without leaks.

