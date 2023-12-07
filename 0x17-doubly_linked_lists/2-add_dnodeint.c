#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: pointer to a pointer to the head of the list
 * @n: value to be stored in the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
/* Allocate memory for the new node */
dlistint_t *new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
return (NULL); /* Return NULL if memory allocation fails */

/* Set the data of the new node to the provided value */
new_node->n = n;
/* The new node is added at the beginning, so its prev points to NULL */
new_node->prev = NULL;
/* The next of the new node points to the current head */
new_node->next = *head;

if (*head != NULL)
/* If the list is not empty, update the prev of the current head */
(*head)->prev = new_node;

*head = new_node; /* Update the head to point to the new node */

return (new_node); /* Return the address of the new element */
}
