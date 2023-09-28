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
if (n <= 1)
{
return (0); /* 0 and 1 are not prime numbers */
}
else if (n <= 3)
{
return (1); /* 2 and 3 are prime numbers */
}
else if (n % 2 == 0 || n % 3 == 0)
{
return (0); /* Multiples of 2 or 3 are not prime numbers */
}
else
{
int i;
for (i = 5; i * i <= n; i += 6)
{
if (n % i == 0 || n % (i + 2) == 0)
{
/* If n is divisible by any number in the form of 6k ± 1, it's not prime*/
return (0);
}
}
return (1); /* n is a prime number */
}
}
