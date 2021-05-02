#include "lists.h"

/**
 *dlistint_len - returns the number of a listint
 *@h: the dlistint to calcul the len
 *Return: len
 */

size_t dlistint_len(const dlistint_t *h)
{
	int j;

	for (j = 0; h != NULL; j++)
		h = h->next;
	return (j);
}
