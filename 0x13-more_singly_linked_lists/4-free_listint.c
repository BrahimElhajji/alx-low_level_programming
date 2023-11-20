#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to the listint_t
 */

void free_listint(listint_t *head)
{
	listint_t *h, *temp;

	h = head;
	while (h != NULL)
	{
		temp = h;
		h = h->next;
		free(temp);
	}
}
