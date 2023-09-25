#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the square matrix (1D array)
 * @size: Size of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0; /* Sum of the main diagonal */
int sum2 = 0; /* Sum of the other diagonal (anti-diagonal) */

/* Calculate the sums of the diagonals */
for (int i = 0; i < size; i++)
{
/* Elements on the main diagonal (row = column) */
sum1 += a[i * size + i];
/* Elements on the other diagonal (row + column = size - 1) */
sum2 += a[i * size + (size - 1 - i)];
}

/* Print the sums */
printf("%d, %d\n", sum1, sum2);
}
