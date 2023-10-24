#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely and sets the head to NULL.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
size_t size = 0; /* Initialize the size of the list */

if (h == NULL || *h == NULL)
return (0); /* If the list is empty or invalid, return 0 */

while (*h != NULL)
{
listint_t *temp = *h; /* Create a temporary pointer to the current node */
*h = (*h)->next; /* Move the head to the next node */

free(temp); /* Free the current node */

/* Increment the size */
size++;
}

/* Return the size of the list that was freed */
return (size);
}
