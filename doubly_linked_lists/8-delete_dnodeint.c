#include "lists.h"

int
delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int coun = 0;
	dlistint_t *prev = NULL;

	if (*head == NULL || current == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current != NULL && coun < index - 1)
	{
		prev = current;
		current = current->next;
		coun++;
	}

	if (current == NULL)
	{
		return (-1);
	}

	prev->next = current->next;
	free(current);
	return (1);
}
