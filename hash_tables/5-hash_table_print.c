#include "hash_tables.h"
/**
 *
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a = 0, b = 0;
	hash_node_t *nod;

	if (ht == NULL)
		return;
	printf("{");
	for (; ht && a < ht->size; a++)
	{
		nod = ht->array[a];
		while (nod != NULL)
		{
			if (b)
				printf(", ");
			printf("'%s': '%s'", nod->key, nod->value);
			nod = nod->next;
			b = 1;
		}
	}
	printf("}\n");
}
