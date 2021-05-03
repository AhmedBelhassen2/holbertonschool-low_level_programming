#include "lists.h"

/**
 *free_dlistint - free the dlistint
 *@head: the dlistint to free
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *auxH;

	while (head != NULL)
	{
		auxH = head->next;
		free(head);
		head = auxH;
	}
}
