#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j;

for (i = 0; i <= 99; i++)
{
for (j = i; j <= 99; j++)
{
putchar((i / 10) + '0'); /* Print the tens digit of the first number*/
putchar((i % 10) + '0'); /* Print the ones digit of the first number*/

putchar(' '); /* Print a space*/

putchar((j / 10) + '0'); /* Print the tens digit of the second number*/
putchar((j % 10) + '0'); /* Print the ones digit of the second number*/

if (i < 99 || j < 99)
{
putchar(','); /* Print a comma*/
putchar(' '); /* Print a space*/
}
}
}

putchar('\n'); /* Print a new line*/

return (0);
}
