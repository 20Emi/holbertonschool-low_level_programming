#include "hash_tables.h"
/**
 *key_index -  function that gives you the index of a key.
 *@key: key
 *@size: is the size of the array of the hash table
 *
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val = 0;

	hash_val = (hash_djb2(key)) % size;

	return (hash_val);
}
