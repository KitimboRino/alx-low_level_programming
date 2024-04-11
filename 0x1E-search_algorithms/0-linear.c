#include "search_algos.h"

/**
 * linear_search - Search for a value in an array using Linear Search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: If value is not present in array or if array is NULL, return -1.
 *         Otherwise, return the index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value) /* if (*(array + i) == value) */
			return (i);
	}
	return (-1);
}
