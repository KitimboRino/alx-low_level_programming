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
size_t count = 0; /* Initialize the count of freed nodes */
int diff; /* Variable to calculate the difference in memory addresses */
listint_t *temp; /* Temporary pointer for node manipulation */

if (!h || !*h)
return (0); /* If the list is empty or invalid, return 0 */

while (*h)
{
diff = *h - (*h)->next; /* Calculate the difference in memory addresses */
if (diff > 0)
{
temp = (*h)->next;
free(*h); /* Free the current node */
*h = temp; /* Move the head to the next node */
count++; /* Increment the count */
}
else
{
free(*h); /* Free the current node */
*h = NULL; /* Set the head to NULL */
count++; /* Increment the count */
break; /* Exit the loop if a loop is detected */
}
}

*h = NULL; /* Set the head to NULL */

return (count); /* Return the size of the list that was freed */
}
