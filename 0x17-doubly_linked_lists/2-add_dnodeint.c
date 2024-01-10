#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: double pointer to the head of the nodes
 * @n: the data o nodes
 * Return: head
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

	ptr->n = n;
	ptr->prev = NULL;
	ptr->prev = NULL;
	ptr->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = ptr;
	}

	*head = ptr;

	return (*head);
}
