#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 *
 * Return: void
 */

void print_alphabet(void)
{
/* Declare a variable to stroe the current character*/
char letter;

/* Loop through the lowercase alphabet, starting from a and ending at z*/
for (letter = 'a'; letter <= 'z'; letter++)
{
/* Call the _putchar function to print the current letter to the output*/
_putchar(letter);
}
/* Print a neline character to the ouptu, creating a new line*/
_putchar('\n');
}
