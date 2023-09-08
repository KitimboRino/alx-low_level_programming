#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
int i, j, k;

for (i = 0; i <= 7; i++)
{
for (j = i + 1; j <= 8; j++)
{
for (k = j + 1; k <= 9; k++)
{
putchar(i + '0'); /* Print the hundreds digit*/
putchar(j + '0'); /* Print the tens digit*/
putchar(k + '0'); /* Print the ones digit*/

if (i < 7 || j < 8 || k < 9)
{
putchar(','); /* Print a comma*/
putchar(' '); /* Print a space*/
}
}
}
}

putchar('\n'); /* Print a new line*/

return (0);
}
