#include "hash_tables.h"
/**
 * hash_table_get - function to retrieve value associated with key
 * @ht: pointer to hash table
 * @key: key to retrieve value
 *
 * Return: value or NULL if key does not exist.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index = 0;
hash_node_t *bucket;

/* Check for invalid parameters */
if (!ht || !key || !*key)
return (NULL);

/* Calculate the index using the key */
index = key_index((const unsigned char *)key, ht->size);
bucket = ht->array[index];

/* Search for the key in the linked list at the calculated index */
while (bucket)
{
/* If the key is found, return the associated value */
if (!strcmp(key, bucket->key))
return (bucket->value);
bucket = bucket->next;
}

/* If the key does not exist, return NULL */
return (NULL);
}
