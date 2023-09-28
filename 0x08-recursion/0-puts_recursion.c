#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - Prints a string followed by a new line recursively.
 * @s: Pointer to the string to be printed.
 */
void _puts_recursion(char *s)
{
if (*s == '\0') /* Base case: Check for the null terminator */
{
putchar('\n'); /* Print a new line when the end of the string is reached */
return;
}

putchar(*s); /* Print the current character */
/* Recursively call the function with the next character */
_puts_recursion(s + 1);
}
