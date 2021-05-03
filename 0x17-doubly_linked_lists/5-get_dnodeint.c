#include "lists.h"

/**
 *free_dlistint2 - free the dlistint
 *@head: the dlistint to free
 */
void free_dlistint2(dlistint_t **head)
{
	dlistint_t *auxH;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		auxH = (*head)->next;
		free(*head);
		*head = auxH;
	}
}
