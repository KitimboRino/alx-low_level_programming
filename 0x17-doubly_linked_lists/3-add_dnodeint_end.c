#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: pointer to a pointer to the head of the list
 * @n: value to be stored in the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
/* Allocate memory for the new node */
dlistint_t *new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
return (NULL); /* Return NULL if memory allocation fails */

/* Set the data of the new node to the provided value */
new_node->n = n;
/* The new node is added at the end, so its next points to NULL */
new_node->next = NULL;

if (*head == NULL)
{
/* If the list is empty, the new node becomes the head */
new_node->prev = NULL;
*head = new_node;
}
else
{
/* If the list is not empty, find the current last node and update pointers */
dlistint_t *last = *head;
while (last->next != NULL)
{
last = last->next;
}
last->next = new_node;
new_node->prev = last;
}

return (new_node); /* Return the address of the new element */
}
