#include "lists.h"

/**
 *print_list - print a list of nodes
 *@h: the list to print
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int j;

	if (h == NULL)
		return (0);
	for (j = 0; h != NULL; j++)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (j);
}
