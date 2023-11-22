#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n) of a listint_t
 * @head: pointer to the listint_t
 * Return: Always 0
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (!head)
	{
		return (0);
	}

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
