#include "hash_tables.h"
/**
 *hash_table_create -  function that creates a hash table.
 *@size: isthe size of the array
 *
 * Return: table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = 0;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (0);

	table->size = size;
	table->array = calloc(sizeof(hash_node_t *), table->size);

	if ((table->array) == NULL)
	{
		free(table);
		return (0);
	}
	return (table);
}
