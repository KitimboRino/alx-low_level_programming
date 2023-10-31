#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
int f;          /* File descriptor */
ssize_t s;       /* Read operation result */
char buffer[5];  /* Buffer to read the first 4 bytes */
char elf[1];    /* Buffer to read the ELF magic number ('E') */

/* Check if the correct number of command-line arguments is provided */
if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: cp file\n");
exit(97);
}

/* Open the file for reading and writing */
f = open(argv[1], O_RDWR);

/* Check if the file cannot be opened */
if (f == -1)
{
dprintf(STDERR_FILENO, "Error: Can't open from file %s\n", argv[1]);
exit(98);
}

/* Read the first 4 bytes from the file into the buffer */
s = read(f, buffer, 4);

/* Check if the read operation fails */
if (s == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

/* Move the file offset by 1 byte to skip one byte */
s = lseek(f, 1, SEEK_SET);

/* Read 1 byte from the file into the 'elf' buffer */
s = read(f, elf, 1);

/* Check if the 'elf' byte is not 'E' */
if (elf[0] != 'E')
exit(98); /* Not a valid ELF file */

/* Close the file */
close(f);

return (0);
}
