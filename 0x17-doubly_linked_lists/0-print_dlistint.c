#include "lists.h"

/**
 *print_listint - print a list of nodes
 *@h: the listint to print
 *Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)

{
	int j;

	for (j = 0; h != NULL; j++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (j);
}
