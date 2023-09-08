#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k, l;

/* Loop through two numbers from 00 to 99*/
for (i = 0; i < 100; i++)
{
for (j = i + 1; j < 100; j++)
{
/* Extract tens and ones digits of the first number (i)*/
k = i / 10;
l = i % 10;

/* Print the tens and ones digits of the first number with a space*/
putchar(k + '0'); /* Print the tens digit*/
putchar(l + '0'); /* Print the ones digit*/
putchar(' '); /* Print a space*/

/* Extract tens and ones digits of the second number (j)*/
k = j / 10;
l = j % 10;

/* Print the tens and ones digits of the second number*/
putchar(k + '0'); /* Print the tens digit*/
putchar(l + '0'); /* Print the ones digit*/

/* Add a comma and space for all combinations except the last one*/
if (i != 98 || j != 99)
{
putchar(','); /* Print a comma*/
putchar(' '); /* Print a space*/
}
}
}

putchar('\n'); /* Print a new line*/

return (0);
}

