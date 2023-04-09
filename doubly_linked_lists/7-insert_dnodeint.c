#include "lists.h"

dlistint_t
*insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *act = *h;
	unsigned int a = 0;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	newnode->n = n;
	if (newnode == NULL || h == NULL)
		return (NULL);

	if (idx == 0)
	{
		newnode->prev = NULL;
		newnode->next = *h;
		(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	while (a < idx - 1 && act->next != NULL)
	{
		act = act->next;
		a++;
	}
	if (act->next == NULL)
	{
		act->next = newnode;
		newnode->prev = act;
		newnode->next = NULL;
		return (NULL);
	}
	newnode->prev = act;
	newnode->next = act->next;
	act->next = newnode;
	newnode->next->prev = newnode;
		return (newnode);
}
