#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new_dnodeint_middle at a given position.
 * @head: Pointer to the first element of the dlistint
 * @idx: position of the new_dnodeint_middle to insert
 * @n: the added value of the new_dnodeint_middle.
 * Return: adress of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *new_dnodeint_middle = malloc(sizeof(dlistint_t));
	dlistint_t *newP = *head;
	unsigned int j;

	if (new_dnodeint_middle == NULL)
		return (NULL);
	new_dnodeint_middle->n = n;
	new_dnodeint_middle->next = NULL;
	if (*head == NULL)
	{
		*head = new_dnodeint_middle;
		new_dnodeint_middle->next = NULL;
		return (new_dnodeint_middle);
	}
	if (idx == 0)
	{
		new_dnodeint_middle->next = *head;
		*head = new_dnodeint_middle;
		return (new_dnodeint_middle);
	}
	for (j = 0; j < (idx - 1) && newP->next != NULL; j++)
	{
		newP = newP->next;
	}
	if (j  < idx - 1)
		return (NULL);
	new_dnodeint_middle->next = newP->next;
	newP->next = new_dnodeint_middle;
	return (new_dnodeint_middle);
}
