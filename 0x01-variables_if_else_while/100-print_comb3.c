#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;

/* Nested loops to create combinations of two digits*/
for (i = 0; i < 8; i++)
{
for (j = i + 1; j < 10; j++)
{
k = 10 * i + j; /* Create a two-digit number*/

putchar((k / 10) + '0'); /* Print the tens digit*/
putchar((k % 10) + '0'); /* Print the ones digit*/

/* Add a comma and space for all combinations except the last one*/
if (i < 8 || j < 9)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n'); /*Print a new line*/

return (0);
}
