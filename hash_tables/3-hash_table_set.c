#include <string.h>
#include "hash_tables.h"
/**
 *
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind = key_index((const unsigned char *) key, ht->size);
	unsigned long int a = ind;
	hash_node_t *new;
	char *act;

	if (!ht || !key || !value || !*key)
		return (0);

	act = strdup(value);
	if (!act)
		return (0);

	while (ht->array[a])
	{
		if (strcmp(ht->array[a]->key, key) == 0)
		{
			free(ht->array[a]->value);
			ht->array[a]->value = act;
			return (1);
		}
		a++;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	new->key = strdup(key);
	if (!new->key)
	{
		free(act);
		return (0);
	}
	new->value = act;
	new->next = ht->array[ind];
	ht->array[ind] = new;

	return (1);
}
