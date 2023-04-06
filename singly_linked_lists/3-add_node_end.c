#include "lists.h"

/**
 *
 *
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *lastnode = *head;
	list_t *new = NULL;

	new = (list_t *)malloc(sizeof(list_t));

	if (*head == NULL)
	{
		free(new);
		return(NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);

	while (lastnode->next != NULL)
/*Recorre la lista hasta encontrar el último nodo*/
	{
		lastnode = lastnode->next;
	}

	lastnode->next = new;
/*Establece el puntero next del último nodo al nuevo nodo*/

	return (*head);
}
