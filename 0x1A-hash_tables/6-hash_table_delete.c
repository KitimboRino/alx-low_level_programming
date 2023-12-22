#include "hash_tables.h"

/**
 * hash_table_delete - free hash table and all nodes
 * @ht: pointer to hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *bucket, *aux_free;
unsigned long int i = 0;

/* Check if the hash table is NULL */
if (!ht)
return;

/* Iterate through each index of the hash table array */
for (i = 0; i < ht->size; i++)
{
bucket = ht->array[i];

/* Iterate through the linked list at each index */
while (bucket)
{
aux_free = bucket;
bucket = bucket->next;

/* Free the key, value, and the node itself */
if (aux_free->key)
free(aux_free->key);
if (aux_free->value)
free(aux_free->value);
free(aux_free);
}
}

/* Free the array and the hash table structure */
free(ht->array);
free(ht);
}
