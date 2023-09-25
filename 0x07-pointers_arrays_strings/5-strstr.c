#include "main.h"

/**
 * _strstr - locates a substring within a string
 * @haystack: the string to search within
 * @needle: the substring to search for
 *
 * Return: pointer to the beginning of the located
 * substring, or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *start = haystack;

while (*haystack != '\0' && *needle != '\0' && *haystack == *needle)
{
haystack++;
needle++;
}

if (*needle == '\0')
{
return (start);
}

haystack = start + 1;
needle = needle - (needle - start) + 1;
}

return (NULL);
}
