/**
 * hash_djb2 - function to compute hash of 'str' using djb2
 * @str: string to hash
 *
 * Return: value of 64 bits hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;

/* Initialize the hash variable to 5381 */
hash = 5381;

/* Iterate through each character in the string */
while ((c = *str++))
{
/* Update the hash using the djb2 algorithm: hash * 33 + c */
hash = ((hash << 5) + hash) +c;
}

/* Return the computed hash value */
return (hash);
}
