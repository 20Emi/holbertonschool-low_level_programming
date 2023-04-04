#include "lists.h"

/**
 * add_node -  function that adds a new node at the beginning
 * @head: head
 *@str: str
 *
 *Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = (list_t *)malloc(sizeof(list_t));

	if (head == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);

	new->next = *head;
	*head = new;

	return (new);
}
