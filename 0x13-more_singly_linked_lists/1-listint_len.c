#include "lists.h"

/**
 *listint_len - returns the number of a listint
 *@h: the listint to calcul the len
 *Return: len
 */

size_t listint_len(const listint_t *h)
{
	int j;

	for (j = 0; h != NULL; j++)
		h = h->next;
	return (j);
}
