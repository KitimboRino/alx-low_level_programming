#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	/* Initialize node count to 0 */
	size_t node_count = 0;

	while (h != NULL)
	{
		/* Move to the next node */
		h = h->next;
		/* Increment the node count */
		node_count++;
	}

	return (node_count);
}
