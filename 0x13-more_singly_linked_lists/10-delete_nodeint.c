#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index in the list.
 *
 * @head: A pointer to a pointer to the head of the list.
 *
 * @index: The index of the node to delete, starting at 0.
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *temp, *prev;

if (head == NULL || *head == NULL)
return (-1); /* If the list is empty or invalid, return -1 */

if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1); /* Successfully deleted the node at index 0 */
}

temp = *head;
prev = NULL;

for (i = 0; temp && i < index; i++)
{
prev = temp;
temp = temp->next;
}

if (temp == NULL)
return (-1); /* Index is out of range */

prev->next = temp->next;
free(temp);
return (1); /* Successfully deleted the node at the specified index */
}
