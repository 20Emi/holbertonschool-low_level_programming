#include "lists.h"
/**
 *free_dlistint - unction that frees
 *@head: head
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}
	else
	{
		if (head->next != NULL)
			free_dlistint(head->next);
/*recorre la lista recursivamente y liberar la memoria asignada a cada nodo.*/
		free(head);
	}
}

