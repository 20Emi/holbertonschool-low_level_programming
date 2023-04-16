#include "hash_tables.h"
/**
 *
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int hash;

	if (ht == NULL)
		return (0);

	while (ht[hash].size != -1)
	{
		if (strcmp(ht[hash].key, key) == 0)
			return (ht[hash].size);

		hash = (hash + 1) % size;
	}
	return (0);
}
