#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer
 * @str: is a string
 * Return: *head
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0, c = 0;
	list_t *current;

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
		current->next = *head;
		*head = current;

		return (*head);
}
