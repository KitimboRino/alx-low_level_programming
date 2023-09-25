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
/* Temporary pointers for iteration */
char *haystack_tmp, *needle_tmp;

/* Iterate through the haystack string */
while (*haystack != '\0')
{
/* Save the current position in haystack */
haystack_tmp = haystack;
/* Initialize needle_tmp for comparison */
needle_tmp = needle;

/* Compare characters in both haystack and needle */
while (*needle_tmp == *haystack_tmp && *needle_tmp != '\0'
&& *haystack_tmp != '\0')
{
needle_tmp++;
haystack_tmp++;
}

if (*needle_tmp == '\0')
/* Return a pointer to the beginning of the located substring */
return (haystack);

haystack++; /* Move to the next character in haystack */
}

/* Substring not found */
return (NULL);
}
