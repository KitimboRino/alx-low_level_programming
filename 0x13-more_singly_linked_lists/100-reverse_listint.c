#include "lists.h"

/**
* reverse_listint - Reverses a listint_t linked list.
*
* @head: A pointer to a pointer to the head of the list.
*
* Return: A pointer to the first node of the reversed list.
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *current = *head;

while (current != NULL)
{
listint_t *next = current->next; /* Store the next node */

current->next = prev; /* Reverse the link to the previous node */

prev = current; /* Move the previous pointer forward */
current = next; /* MOve the current pointer forward */
}

*head = prev; /* Updte the head to point to the new first node */

/* Retrun a pointer to the first node of the reversed list */
return (*head);
}
