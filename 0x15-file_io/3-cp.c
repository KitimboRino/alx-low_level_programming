#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * error_handler - Handles and prints error messages to stderr.
  
 * @exit_code: The exit code to use.
 *
 * @message: The error message to print.
 */

void error_handler(int exit_code, char *message, ...)
{
va_list args;
va_start(args, message);
dprintf(2, message, args);
va_end(args);
exit(exit_code);
}


/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[1024];

if (argc != 3)
error_handler(97, "Usage: cp file_from file_to\n");

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
error_handler(98, "Error: Can't read from file %s\n", argv[1]);

fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
error_handler(99, "Error: Can't write to file %s\n", argv[2]);

while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
error_handler(99, "Error: Can't write to file %s\n", argv[2]);
}

if (bytes_read == -1)
error_handler(98, "Error: Can't read from file %s\n", argv[1]);

if (close(fd_from) == -1)
error_handler(100, "Error: Can't close fd %d\n", fd_from);
if (close(fd_to) == -1)
error_handler(100, "Error: Can't close fd %d\n", fd_to);

return (0);
}

