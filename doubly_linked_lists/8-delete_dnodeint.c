#include "lists.h"

int
delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int coun = 0;
	dlistint_t *pr, *ap;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		ap = current->next;
		free(current);
		if (ap)
			ap->prev = NULL;
		return (1);
	}
	while (coun < index - 1)
	{
		current = current->next;
		coun++;
	}

	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	ap = current->next;
	pr = ap->next;
	current->next = pr;
	if (pr)
		pr->prev = current;
	free(ap);
	return (1);
}
