#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 on success
 */
int main(void)
{
int i;
/* Loop through numbers from 0 to 9*/
for (i = 0; i < 10; i++)
putchar(i + '0');
putchar('\n'); /* Print a new line*/
return (0);
}
