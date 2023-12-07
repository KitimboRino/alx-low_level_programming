#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 *
 * @head: pointer to the head of the list
 * @index: index of the node to retrieve, starting from 0
 * Return: the nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; i < index && head != NULL; i++)
{
/* Move to the next node until the desired index is reached */
head = head->next;
}

return (head); /* Return the nth node or NULL if it doesn't exist */
}
