#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer to a pointer
 * @str: is a string
 * Return: *head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0, c = 0;
	list_t *current, *p;

	current = malloc(sizeof(list_t));

	if (current == NULL)
		return (0);

	current->str = strdup(str);

	while (str[i] != '\0')
	{
		i++;
		c++;
	}
	current->len = c;
	current->next = NULL;
	p = *head;

	if (p == NULL)
		*head = current;
	else
	{
		while (p->next != NULL)
			p = p->next;
		p->next = current;
	}

	return (*head);
}
