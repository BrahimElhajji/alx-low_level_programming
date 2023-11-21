#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to pointer to the listint_t
 * Return: d
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int d;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		d = temp->n;
		*head = temp->next;
		free(temp);
	}
	return (d);
}
