#include "main.h"

/**
 * factorial - Calcualtes the factorial of a given number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of n, or -1 if n is negative.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1); /* Base case: Factorial of 0 is 1 */
else
/* Recursive calculation of factorial */
return (n * factorial(n - 1));
}
