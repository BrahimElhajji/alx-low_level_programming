#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to pointer to the listint_t
 */

void free_listint2(listint_t **head)
{
	listint_t *h, *temp;

	if (head == NULL || *head == NULL)
		return;

	h = *head;
	while (h != NULL)
	{
		temp = h;
		h = h->next;
		free(temp);
	}
	*head = NULL;
}
