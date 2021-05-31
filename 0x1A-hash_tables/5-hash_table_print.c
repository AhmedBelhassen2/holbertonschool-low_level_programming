#include "hash_tables.h"
/**
 *hash_table_print - fn to get
 *@ht: hash
 *Return: hash
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *t;
	unsigned long int i, k = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		t = ht->array[i];
		while (t)
		{
			if (k > 0)
				printf(", ");
			printf("'%s': '%s'", t->key, t->value);
			t = t->next;
			k++;
		}
	}
	printf("}\n");
}
