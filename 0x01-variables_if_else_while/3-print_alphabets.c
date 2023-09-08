#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
char letter;

/* Print the lowercase alphabet from 'a' to 'z'*/
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter); /* Print the current lowercase letter*/
}

/* Print the uppercase alphabet from 'A' to 'Z'*/
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter); /* Print the current uppercase letter*/
}
putchar('\n'); /* Print a new line*/

return (0);
}
