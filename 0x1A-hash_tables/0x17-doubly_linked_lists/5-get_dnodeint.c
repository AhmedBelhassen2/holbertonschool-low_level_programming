#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth dnode of the list
 * @head: the head of the list
 * @index: the index
 * Return: nth dnode
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int j = 0;

	while (head)
	{
		if (j == index)
			return (head);
		head = head->next;
		j++;
	}
	return (NULL);
}
