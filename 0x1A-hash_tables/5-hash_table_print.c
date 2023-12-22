#include "hash_tables.h"

/**
 * hash_table_print - function to print the key:value from ht
 * @ht: pointer to hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i = 0;
hash_node_t *bucket;
int not_fin = 0;  /* Flag to check if it's the first key/value pair */

/* Check if the hash table is NULL */
if (!ht)
return;

printf("{");
for (i = 0; i < ht->size; i++)
{
bucket = ht->array[i];

/* Iterate through the linked list at each index */
while (bucket)
{
/* Print comma and space if it's not the first key/value pair */
if (not_fin)
printf(", ");
printf("'%s': '%s'", bucket->key, bucket->value);

/* Set the flag to indicate subsequent pairs */
not_fin = 1;

bucket = bucket->next;
}
}
printf("}\n");
}
