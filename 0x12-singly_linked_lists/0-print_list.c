#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list.
 *
 * @h: A pointer to the head of the linked list
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
/* Initialize a counter for the number of nodes printed. */
size_t node_count = 0;

/* Iterate throught the linked list. */
while (h)
{
/* If the string in the current node is NULL. */
if (!h->str)
printf("[0] (nil)\n");

else
/* Print the string and its length. */
printf("[%u] %s\n", h->len, h->str);

/* Move to the nextx node in th list. */
h = h->next;
node_count++;
}

return (node_count);
}
