#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Enttyr point
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

/* Seed the random number generator with the current time*/
srand(time(0));
/* Seed the random number generator with the current time*/
n = rand() - RAND_MAX / 2;

if (n > 2)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
return (0);
}
