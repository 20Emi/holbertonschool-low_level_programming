#include <string.h>
#include "hash_tables.h"
/**
 *
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind;
	unsigned long int a;
	hash_node_t *new;
	char *act;

	if (!ht || !key || !value || !*key)
		return (0);

	act = strdup(value);
	if (act == NULL)
		return (0);

	ind = key_index((const unsigned char *) key, ht->size);
	for (a = ind; ht->array[a]; a++)
	{
		if (strcmp(ht->array[a]->key, key) == 0)
		{
			free(ht->array[a]->value);
			ht->array[a]->value = act;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(act);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = act;
	new->next = ht->array[ind];
	ht->array[ind] = new;

	return (1);
}
