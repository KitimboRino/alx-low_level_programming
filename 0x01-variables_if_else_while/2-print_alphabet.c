#include <stdio.h>

/**
* main - Printing alphabets in lowercase.
* Return: Always 0 (Success)
*/
int main(void)
{
char letter = 'a'; /* Start with 'a'*/
while (letter <= 'z')
{
putchar(letter); /* Print the current letter*/
letter++; /* Move to the next letter*/
}
putchar('\n'); /* Print a new line at the end*/
return (0);
}
