#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 50; /* Number of Fibonacci numbers to print*/
long int fib1 = 1, fib2 = 2, next;

/* Print the first two Fibonacci numbers*/
printf("%ld, %ld", fib1, fib2);

/* Calculate and print the remaining Fibonacci numbers*/
for (int i = 3; i <= n; i++)
{
next = fib1 + fib2;
printf(", %ld", next);

/* Update values for the next iteration*/
fib1 = fib2;
fib2 = next;
}

printf("\n");

return (0);
}
