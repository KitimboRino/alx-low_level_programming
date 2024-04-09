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
    size_t i; // Declare loop counter variable.

    // Check if the array is NULL or empty.
    if (!array || size == 0)
        return (-1); // Return -1 if the array is NULL or empty.

    // Iterate through the array to search for the value.
    for (i = 0; i < size; i++)
    {
        // Print the current element being checked.
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);

        // If the current element matches the value, return its index.
        if (array[i] == value)
            return (i);
    }

    // If the value is not found in the array, return -1.
    return (-1);
}
