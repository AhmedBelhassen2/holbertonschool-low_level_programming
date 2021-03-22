#include "lists.h"

/**
 *free_listint - free the listint
 *@head: the listint to free
 */

void free_listint(listint_t *head)
{
	listint_t *auxH;
	while (head != NULL)
	{

		auxH = head->next;
		free(head);
		head = auxH;
	}
}
