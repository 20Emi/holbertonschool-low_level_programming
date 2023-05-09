#include "lists.h"

/**
 *print_list - prints all the elements of a ´list_t´ list
 *@h: prints node
 *
 * Return: int pri
 */

size_t print_list(const list_t *h)
{
	int pri = 0;

	while (h)/*mientras que 'h' sea verdadera*/
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");

			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		pri++;
	}
	return (pri);
}
