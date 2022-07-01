#include "hash_tables.h"

/**
 * hash_table_set - function adds an element to the hash table.
 * @ht: A pointer to a hash_table_t
 * @key: is a pointer to key
 * @value: is a pointer to value
 * Return: 1 if succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i, index;

	char *dup_value;

	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	dup_value = strdup(value);
	if (dup_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = 0; ht->array[i]; i++) /* update value if key exist */
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value); /* free exisiting value */
			ht->array[i]->value = dup_value; /* set new value */
			return (1);
		}
	}
	/* if key doesn't exist */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(dup_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = dup_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
