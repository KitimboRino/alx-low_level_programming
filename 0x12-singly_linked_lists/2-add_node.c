#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list.
 * @head: A double pointer to the head of the linked list.
 * @str: The new string to be added in the node.
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
/* Declare a pointer to a new list node. */
list_t *new;

/* Initialize a variable to store the length of the input string. */
unsigned int len = 0;

/* Calculate the length of the input string. */
while (str[len])
len++;

/* Allocate memory for the new node. */
new = malloc(sizeof(list_t));
if (!new)
return (NULL);

/* Copy the inout string to the new node. */
new->str = strdup(str);

/* Set the lenght and the next pointer for the new node. */
new->len = len;
new->next = (*head);

/* Update the head to point to the new node. */
(*head) = new;

return (*head);
}
