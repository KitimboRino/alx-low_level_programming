#include "main.h"

/**
 * _strlen_recursion - Returns the lenght of a string recursively.
 * @s: Pointer to the string whose length is to be calculated.
 *
 * Return: The lenght of the string.
*/
int _strlen_recursion(char *s)
{
/* Base case: Check for nul terminators */
if (*s == '\0')
{
return (0); /* Length is 0 for an empty string */
}
else
{
/* Recursively call with the next character and add 1 */
return (1 + _strlen_recursion(s + 1));
}
}
