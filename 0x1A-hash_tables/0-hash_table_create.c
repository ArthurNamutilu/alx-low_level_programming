#include "hash_tables.h"

/**
 * hash_table_create- function that creats a hash table
 * @size: size of the hash table
 * Return: new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	if (size == 0)
		return (NULL);
	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(hash_node_t *) * size);

	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;
	return (new_table);
}
