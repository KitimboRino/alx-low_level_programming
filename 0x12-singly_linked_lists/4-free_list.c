#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list.
 * @head: Pointer to the head of the list_t list to be freed.
 */

void free_list(list_t *head)
{
list_t *temp;

/* Loop through the list and free each node and its string. */
while (head)
{
/* Store the next node to avoid losing the reference. */
temp = head->next;
/* Free the string stored in the node. */
free(head->str);
/* Free the current node. */
free(head);
/* Move to the next node. */
head = temp;	}
}
