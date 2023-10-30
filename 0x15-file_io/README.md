0x15. C - File I/O

1. Creating, Opening, Closing, Reading, and Writing Files:
   - Creating a File: To create a new file in C, you can use the `fopen()` function, which is part of the standard C library. For example:
     ```c
     FILE *file = fopen("example.txt", "w");  // "w" stands for write mode
     ```
   - Opening a File: You can open an existing file using the `fopen()` function as well. You specify the mode, like "r" for read, "w" for write, "a" for append, and so on.
   - Closing a File: Use the `fclose()` function to close an open file when you're done with it.
   - Reading and Writing Files: You can read from and write to files using functions like `fread()`, `fwrite()`, `fscanf()`, and `fprintf()`. These functions work with the `FILE` data structure.


2. File Descriptors:
   - File descriptors are small integers used by the operating system to uniquely identify open files in a process. In C, you don't often work with file descriptors directly when using standard I/O functions (e.g., `fopen`, `fclose`). File descriptors are mainly used when making system calls for low-level file operations.


3. Standard File Descriptors:
   - There are three standard file descriptors in C:
     - `0` (STDIN_FILENO): Standard input, often connected to the keyboard.
     - `1` (STDOUT_FILENO): Standard output, often connected to the console.
     - `2` (STDERR_FILENO): Standard error output, also often connected to the console.
   - Their POSIX names are STDIN_FILENO, STDOUT_FILENO, and STDERR_FILENO.


4. Using I/O System Calls (open, close, read, write):
   - To work with file descriptors directly, you use system calls like `open()`, `close()`, `read()`, and `write()`.
   - For example, to open a file using `open()`:
     ```c
     int fd = open("example.txt", O_RDONLY);  // O_RDONLY for read-only
     ```
   - To read from a file descriptor:
     ```c
     char buffer[1024];
     ssize_t bytesRead = read(fd, buffer, sizeof(buffer));
     ```


5. Flags O_RDONLY, O_WRONLY, O_RDWR:
   - These flags are used when opening a file with the `open()` system call.
   - `O_RDONLY`: Opens the file for read-only access.
   - `O_WRONLY`: Opens the file for write-only access.
   - `O_RDWR`: Opens the file for both reading and writing.


6. File Permissions:
   - File permissions determine who can read, write, or execute a file.
   - You can set permissions when creating a file using the `open()` system call. For example:
     ```c
     int fd = open("example.txt", O_WRONLY | O_CREAT, 0644);
     ```
   - `0644` is an octal representation of the permissions, where `6` means read and write for the owner and read for others.


7. System Call:
   - A system call is a request to the operating system's kernel to perform a specific operation, like file I/O, process management, or network communication.
   - System calls provide a way for user-level programs to interact with the low-level resources of the computer.


8. Difference Between a Function and a System Call:
   - Functions are high-level program constructs that are typically part of a programming language's standard library.
   - System calls are lower-level requests to the operating system for services like file I/O, memory allocation, and process control.
   - Functions are executed in user space, while system calls involve a context switch from user space to kernel space, which is more resource-intensive.


To conclude, file handling in C involves a combination of high-level I/O functions and low-level system calls, depending on your specific needs and the level of control you require. System calls offer more control but are typically less convenient than using standard C library functions.

