#include "lists.h"

/**
 *print_dlistint -  function that prints all the elements
 *@h: prints node
 *
 * Return:int dli
 */

size_t print_dlistint(const dlistint_t *h)
{
	int dli = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next; /*"h" se actualiza para aputar al siguiente nodo.*/
		dli++;/*incrementa "dli" en 1 para contar el número de nodos impresos*/
	}
	return (dli);
}
