#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: double pointer to the head of the nodes
 * @n: the data of the nodes
 * Return: head
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *temp;

	ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = NULL;

	if (*head == NULL)
	{
		ptr->prev = NULL;
		*head = ptr;
		return (*head);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = ptr;
	ptr->prev = temp;
	return (*head);

}
