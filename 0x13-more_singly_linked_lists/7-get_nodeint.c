#include "lists.h"

/**
*
*
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

for (j = 0; j < index ; j++)
{
	if (head == NULL)
		return (NULL);
	head = head->next;
}
return (head);
}
