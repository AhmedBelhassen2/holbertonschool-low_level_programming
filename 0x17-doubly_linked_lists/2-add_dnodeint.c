#include "lists.h"

/**
 * add_dnodeint - Add a node
 * @head: header of the dlistint
 * @n: the value
 * Return: An unsigned integer
 */

dlistint_t *add_dnodeint(dlistint_t **h, const int n)
{
	dlistint_t  *new_nodeint_begin = malloc(sizeof(listint_t));

	if (new_nodeint_begin == NULL)
		return (NULL);
	new_nodeint_begin->n = n;
	new_nodeint_begin->next = *head;
	*head = new_nodeint_begin;
	return (new_nodeint_begin);
}
