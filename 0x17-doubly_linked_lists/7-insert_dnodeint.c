#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a newNode node at a given position
 *
 * @h: pointer to a pointer head
 * @idx: the index of the node
 * @n: the number of nodes
 *
 * Return: NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new_dnodeint_middle;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_dnodeint_middle = malloc(sizeof(dlistint_t));
	if (new_dnodeint_middle == NULL)
		return (NULL);
	new_dnodeint_middle->n = n;
	new_dnodeint_middle->prev = tmp;
	new_dnodeint_middle->next = tmp->next;
	tmp->next->prev = new_dnodeint_middle;
	tmp->next = new_dnodeint_middle;

	return (new_dnodeint_middle);
}
