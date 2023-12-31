/**
 * _pow_recursion - Calculates x raised to the power of y recursively.
 * @x: The base number.
 * @y: The exponent
 *
 * Return: The result of x raised to the power of y
 *         -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
/* Error: Negative exponent is not defined */
return (-1);
else if (y == 0)
/* Base case: Any number raised to the power of 0 is 1 */
return (1);
else
/* Recursive calculation of x raised to power y */
return (x * _pow_recursion(x, y - 1));
}
