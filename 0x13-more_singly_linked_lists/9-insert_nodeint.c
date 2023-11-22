#include "lists.h"

/**
 * insert_nodeint_at_index -  function that inserts a node at a given position
 * @head: pointer to pointer to the listint_t
 * @idx: an integer
 * @n: second integer
 * Return: node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *ptr;
	unsigned int i;

	node = malloc(sizeof(listint_t));

	if (head == NULL || node == NULL)
		return (NULL);


	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	ptr = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (ptr == NULL)
		{
			free(node);
			return (NULL);
		}
		ptr = ptr->next;
	}

	if (ptr == NULL)
	{
		free(node);
		return (NULL);
	}

	node->next = ptr->next;
	ptr->next = node;

	return (node);
}
