#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 *
 * Return: pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;

/* Check if size is 0, and return NULL if so (invalid size) */
if (size == 0)
return (NULL);

/* Allocate memory for the hash table structure */
table = calloc(1, sizeof(hash_table_t));
if (table == NULL)
return (NULL);

/* Set the size of the hash table */
table->size = size;

/* Allocate memory for the array of pointers to hash nodes */
table->array = calloc(size, sizeof(hash_node_t *));
if (table->array == NULL)
{
/* Free allocated memory if allocation fails */
free(table);
return (NULL);
}

return (table);
}
