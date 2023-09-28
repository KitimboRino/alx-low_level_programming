#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Function that prints a string in reverse recursively.
 * @s: Pinter to string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
/* Base case: Check for the null terminator */
if (*s == '\0')
{
/*Recursively call the function with the next character */
_print_rev_recursion(s + 1);
/* Print the current character after the recursive call */
putchar(*s);
}
}
