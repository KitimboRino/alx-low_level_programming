#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *temp = *head;
unsigned int len = 0;

while (str[len])
len++;

/* Allocate memory for the new node. */
new = malloc(sizeof(list_t));
if (!new)
return (NULL);

/* Duplicate the input string and populate the new node. */
new->str = strdup(str);
new->len = len;
new->next = NULL;

/* If the list is initially empty, make the new node the head. */
if (*head == NULL)
{
*head = new;
return (new);
}

/**
 * Else, taverse the list to find the last node and append
 * the new node.
*/
while (temp->next)
temp = temp->next;

temp->next = new;

return (new);
}
