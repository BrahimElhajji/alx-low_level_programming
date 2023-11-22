#include "lists.h"

/**
 * delete_nodeint_at_index -  function that deletes node at index of listint_t
 * @head: pointer to pointer to the listint_t
 * @index: an unsigned integer
 * Return: 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *pre, *ptr;
	unsigned int i;

	if (*head == NULL)
		return (-1);


	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	pre = NULL;
	ptr = *head;
	for (i = 0; i < index; i++)
		if (ptr == NULL)
		{
			return (-1);
		}
	pre = ptr;
	ptr = ptr->next;

	if (ptr == NULL)
		return (-1);

	pre->next = ptr->next;
	free(ptr);

	return (1);
}
