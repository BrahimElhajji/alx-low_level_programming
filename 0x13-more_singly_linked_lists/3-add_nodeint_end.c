#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: pointer to pointer to the listint_t
 * @n: an integr
 * Return: temp
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *h;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	h = *head;
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = temp;
	return (temp);
}
