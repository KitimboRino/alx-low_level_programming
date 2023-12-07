#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) in a dlistint_t list
 *
 * @head: pointer to the head of the list
 * Return: sum of all data values, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n; /* Add the data value of the current node to the sum */
head = head->next; /* Move to the next node */
}

return (sum);
}
