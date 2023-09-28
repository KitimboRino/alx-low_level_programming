#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to be checked.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */

int is_prime_number(int n)
{
if (n == 2)
{
return (1);
}
else if (n > 1 && n % 2 == 1)
{
return (1);
}
else
{
return (0);
}
}
