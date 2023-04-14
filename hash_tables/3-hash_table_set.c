#include <string.h>
#include "hash_tables.h"
/**
 *
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind = key_index((const unsigned char *) key, ht->size);
	hash_node_t *new;
	hash_node_t	*act;

	if (ht == NULL)
		return (0);

	if (ht->array[ind] == NULL) /*Verifica si la posición está vacía*/
	{/*Cree un nuevo nodo*/
		new = malloc(sizeof(hash_node_t));
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = NULL;

		/*Agrega el nodo a la tabla hash*/
		ht->array[ind] = new;
		}
	else
	{
		act = ht->array[ind];
		while (act->next != NULL)
			act = act->next;
	}
	act->next = new;
	return (1);
}
