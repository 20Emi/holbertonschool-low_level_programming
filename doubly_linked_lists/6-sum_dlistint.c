#include "lists.h"

int
sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *nu = head;

	while (nu != NULL)
	{
		sum += nu->n;
/*agrega el valor del nodo a la suma*/
		nu = nu->next;
	}
	nu = head->prev;
/*recorre la lista hacia atras*/
	/*while (nu != NULL)
	{
		sum += nu->n;
		nu = nu->prev;
*retrocede al nodo anterior*/

	return (sum);
}

