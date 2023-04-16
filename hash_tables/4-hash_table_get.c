#include "hash_tables.h"

char
*hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int a;
	hash_node_t *nod;

	if (!ht || !key)
		return (0);

	a = key_index((unsigned char *)key, ht->size);
	if ((ht->array[a]) == NULL)
		return (0);
	nod = ht->array[a];

	for (; nod->next; nod = nod->next)
	{}
	return (nod->value);
}
