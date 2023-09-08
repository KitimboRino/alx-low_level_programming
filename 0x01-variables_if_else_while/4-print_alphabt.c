#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char c;

/* Loop through the lowercase alphabet from 'a' to 'z'*/
for (c = 'a'; c <= 'z'; c++)
{
/* Check if the current character is not 'e' and not 'q'*/
if (c != 'e' && c != 'q')
{
putchar(c); /* Print the current character*/
}
}

putchar('\n'); /* Print a new line*/

return (0);
}
