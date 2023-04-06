#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_node_end - function that adds a new node at the end
 *@head: head
 *@str: str
 *
 *Return: lastnode
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastnode = *head;
	list_t *new = NULL;

	new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (lastnode->next != NULL)
/*Recorre la lista hasta encontrar el último nodo*/
	{
		lastnode = lastnode->next;
	}

	lastnode->next = new;
/*Establece el puntero next del último nodo al nuevo nodo*/

	return (lastnode->next);
}
