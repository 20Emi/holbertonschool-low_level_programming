#include "lists.h"

/**
 *list_len - returns the number of elements
 *@h: prints node
 *
 * *Return: int pri
 */

size_t list_len(const list_t *h)
{
	int pri = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			h = h->next;
		}

		pri++;
		h = h->next;
	}
	return (pri);
}
