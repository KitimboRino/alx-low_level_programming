#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase.
 *
 * Return: 0 on success
 */
int main(void)
{
int i;

/* Loop through numbers 0 to 9*/
/* and print them as characters*/
for (i = 0; i < 10; i++)
{
putchar(i + '0'); /* Print the current number*/
}

/* Loop through lowercase hexadecimal*/
/* characters 'a' to 'f' and print them*/
for (i = 'a'; i <= 'f'; i++)
{
putchar(i); /* Print the current character*/
}

putchar('\n'); /* Print a new line*/

return (0);
}
