#include "lists.h"

/**
 * add_dnodeint_end - Add a nodeint at the end
 * @head: header of the dlistint
 * @n: integer
 * Return: new dnodeint
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t  *new_dnodeint_end = malloc(sizeof(dlistint_t));
	dlistint_t *p;

	if (new_nodeint_end == NULL)
		return (NULL);
	new_nodeint_end->n = n;
	new_nodeint_end->next = NULL;
	if (*head == NULL)

		new_dnodeint_end->prev = NULL;
		*head = new_nodeint_end;
	else
	{
		p = *head;
		while (p->next)
			p = p->next;
		new_dnodeint_end->prev = p
		p->next = new_nodeint_end;
	}
	return (new_nodeint_end);
}
