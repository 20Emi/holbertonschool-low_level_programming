#include "lists.h"

dlistint_t
*add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *lastnode = *head;
	dlistint_t *new = NULL;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;

	if (lastnode)/*si el puntero no es nulo*/
	{
		while (lastnode->next)
/*se recorre la lista a traves de los nodos hasta llegar al último*/
		{
			lastnode = lastnode->next;
		}
		lastnode->next = new;
		new->prev = lastnode;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	new->next = NULL;

	return (new);
}
