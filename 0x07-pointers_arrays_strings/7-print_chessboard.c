#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chessboard to the console
 * @a: 2D array representing the chessboard
 */
void print_chessboard(char (*a)[8])
{
int row, col;

/* Iterate through each row of the chessboard */
for (row = 0; row < 8; row++)
{
/* Iterate through each column of the chessboard */
for (col = 0; col < 8; col++)
{
/* Print the character at position (row, col) */
putchar(a[row][col]);
}
/* Move to the next line for the next row */
putchar('\n');
}
}
