#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: a list_t pointer
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
