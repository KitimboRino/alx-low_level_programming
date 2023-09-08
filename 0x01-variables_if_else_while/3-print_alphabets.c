#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
char letter = 'a'; /* Start with 'a'*/

while (letter <= 'z')
{
putchar(letter); /* Print the current lowercase letter*/

if (letter == 'z')
{
letter = 'A'; /* Reset to 'A' after 'z'*/
putchar('\n'); /* Print a new line*/
}
else
{
letter++; /* Move to the next lowercase letter*/
}
}
return (0);
}
