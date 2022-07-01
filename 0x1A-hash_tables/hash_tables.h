#ifndef __HASH_TABLE__
#define __HASH_TABLE__

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct hash_node_s - Node of a hash table.
 *
 * @key: The key, string
 * THe key is unique in the hashtable
 * @value: The value corresponding to a key
 * @next: a pointer to the next node of a list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;


/**
 * struct hash_table_s - Hash Table data strucuture
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a LinkedList,
 * because we watnt our HashTable to use a chaining collision handling.
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;


hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);

#endif /* __HASH_TABLE__ */
