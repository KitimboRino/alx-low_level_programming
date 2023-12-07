#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current;

while (head != NULL)
{
current = head;        /* Save the current node */
head = head->next;     /* Move to the next node */
free(current);         /* Free the current node */
}
}
