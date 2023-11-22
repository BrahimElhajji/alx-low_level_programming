#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: pointer to the listint_t
 * @index: an unsigned int
 * Return: Always 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (head != NULL)
	{
		if (c == index)
		{
			return (head);
		}
		head = head->next;
		c++;
	}
	return (NULL);
}
