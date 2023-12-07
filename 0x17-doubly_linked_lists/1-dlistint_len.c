#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 *
 * @h: head of the list
 * Return: the number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0; /* Initialise counter to zero */

while (h != NULL) /* Loop unitl end of list is reached */
{
count++; /* Increment counter fir each node */
h = h->next; /* Move to next node */
}

return (count); /* Return total count of nodes */
}
