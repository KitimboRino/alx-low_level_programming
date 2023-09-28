#include "main.h"
/**
 * _sqrt_helper - Helper function to find the square root recursively.
 * @n: The number for which to calculate the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1
 * if n does not have a natural square root.
 */

int _sqrt_helper(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);
return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square
 * root of a number recursively.
 * @n: The number for which to calculate the square root.
 *
 * Return: The natural square root of n, or -1
 * if n does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (_sqrt_helper(n, 1));
}
