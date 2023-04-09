#include "lists.h"

int
delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int coun = 0;
	dlistint_t *pr, *ap;

	if (*head == NULL || current == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		ap = current->next;
		free(current);
		return (1);
	}
	while (current != NULL && coun < index - 1)
	{
		current = current->next;
		coun++;
	}

	if (current == NULL || current->next)
	{
		return (-1);
	}

	ap = current->next;
	pr = ap->next;
	pr = current->next;
	free(pr);
	return (1);
}
