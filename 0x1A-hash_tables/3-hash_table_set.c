#include "hash_tables.h"
/**
 *hash_table_set - fn hash
 *@ht: hash param
 *@key: the key
 *@value: the value
 *Return: hash
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int n;
	hash_node_t *t;
	if (!ht || !key || !value)
		return (0);
	if (strlen(key) == 0)
		return (0);
	n = key_index((unsigned char *)key, ht->size);
	if (ht->array[n])
	{
		if (strcmp(ht->array[n]->key, key) == 0)
		{
			free(ht->array[n]->value);
			ht->array[n]->value = strdup(value);
			return (1);
		}
	}
	t = malloc(sizeof(hash_node_t));
	if (t == NULL)
	{
		return (0);
	}
	t->key = strdup(key);
	t->value = strdup(value);
	t->next = ht->array[n];
	ht->array[n] = t;
	return (1);
}
