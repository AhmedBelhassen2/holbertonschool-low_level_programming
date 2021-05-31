#include "hash_tables.h"
/**
 *hash_table_delete - fn to delete
 *@ht: hash
 *Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned int i = 0;
hash_node_t *m, *t;
if (!ht)
return;
for (i = 0; i < ht->size; i++)
{
m = ht->array[i];
while (m)
{
t = m->next;
free(m->key);
free(m->value);
free(m);
m = t;
}
}
free(ht->array);
free(ht);
}
