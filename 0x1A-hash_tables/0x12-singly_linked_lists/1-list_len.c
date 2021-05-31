#include "lists.h"
/**
 *list_len - returns the number of a list
 *@h: the list to calcul the len
 *Return: len
 */
size_t list_len(const list_t *h)
{
	int j;

	if (h == NULL)
		return (0);
	for (j = 0; h != NULL; j++)
		h = h->next;
	return (j);
}
