#include "lists.h"

/**
 * free_list - unction that frees a list_t list.
 *@head: head
 */

void free_list(list_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}

	free_list(head->next);
/* Liberar la lista recursivamente, comenzando desde el siguiente nodo*/

	free(head); /*Liberar la memoria al nodo actual*/
}
