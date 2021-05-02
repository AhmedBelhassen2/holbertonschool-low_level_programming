#include "lists.h"

/**
 * add_dnodeint - Add a node
 * @head: header of the dlistint
 * @n: the value
 * Return: An unsigned integer
 */

dlistint_t *add_dnodeint(dlistint_t **h, const int n)
{
	dlistint_t  *new_dnodeint_begin = malloc(sizeof(dlistint_t));

	if (new_dnodeint_begin == NULL)
		return (NULL);
	new_dnodeint_begin->n = n;
	new_dnodeint_begin->next = *h;
	new_dnodeint_begin->prev = NULL;
	*h = new_dnodeint_begin;
	return (new_dnodeint_begin);
}
