#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: set of bytes to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
size_t i, j;

/* Loop through the characters in s */
for (i = 0; s[i] != '\0'; i++)
{
/* Loop through the characters in accept */
for (j = 0; accept[j] != '\0'; j++)
{
/* Check if the current character in s matches any character in accept */
if (s[i] == accept[j])
{
/* Return a pointer to the matching byte in s */
return (s + i);
}
}
}

/* If no match is found, return NULL */
return (NULL);
}
