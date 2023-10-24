#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head, *fast = head; /* Initialize slow and fast pointers */

while (fast && fast->next)
{
slow = slow->next; /* Move slow one step */
fast = fast->next->next; /* Move fast two steps */

if (slow == fast)
{
slow = head; /* Reset slow to the head */
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow); /* Return the address where the loop starts */
}
}

return (NULL); /* If no loop is found, return NULL */
}
