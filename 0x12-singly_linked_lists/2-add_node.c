#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
	{
		/* Return NULL if the input string is NULL */
		return (NULL);
	}

	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		/* Return NULL if memory allocation fails */
		return (NULL);
	}

	/* Duplicate the input string */
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
	free(new_node);

	/* Return NULL if string duplication fails */
	return (NULL);
	}


	/* Set the new node's next pointer to the current head */
	new_node->next = *head;
	/* Update the head to point to the new node */
	*head = new_node;
	/* Return the address of the new element*/
	return (new_node);
}
