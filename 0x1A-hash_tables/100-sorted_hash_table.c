#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - function creates a shash_table_t
 * @size: is the size of the array
 *
 * Return: is a pointer to the created shash_table_t.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *new;

	new = malloc(sizeof(shash_table_t));
	if (new == NULL)
		return (NULL);

	new->size = size;
	new->array = malloc(sizeof(shash_node_t *) * size);
	if (new->array == NULL)
		return (NULL);

	for (i = 0; new->array[i]; i++)
		new->array[i] = NULL;

	new->shead = NULL;
	new->stail = NULL;

	return (new);

}

/**
 * shash_table_set - function insert a key/value pair into a
 * shash_table_t according to the natural ordering of keys
 *
 * @ht: A pointer to a shash_table_t.
 * @key: is a pointer to key
 * @value: is a pointer to value
 * Return: 1 if succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *tmp;
	unsigned long int index;
	char *value_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_copy;
			return (1);
		}
		tmp = tmp->next;
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (0);

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		free(value_copy);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	if (ht->shead == NULL) /* on first insertion */
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
		return (1);
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		ht->shead->sprev = new;
		new->snext = ht->shead;
		new->sprev = NULL;
		ht->shead = new;
		return (1);
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;

		new->sprev = tmp;
		new->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new;
		else
			tmp->snext->sprev = new;
		tmp->snext = new;
	}
	return (1);
}

/**
 * shash_table_get - function gets the value of a key.
 * @ht: A pointer to shash_table_t.
 * @key: A pointer to key.
 * Return: valus associated with key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node) ? node->value : NULL);
}


/**
 * shash_table_print - function prints a shash_table_t
 * @ht: A pointer to shash_table_t
 * Return: Always void.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;

	printf("{");
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - function prints a shash_table_t in reverse order
 * @ht: A pointer to a shash_table_t
 *
 * Return: Always void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;

	printf("{");
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}


/**
 * shash_table_delete - function deletes a shash_table_t
 * @ht: A pointer to a shash_table_t
 *
 * Return: always void.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;

	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}
	free(ht->array);
	free(ht);
}
