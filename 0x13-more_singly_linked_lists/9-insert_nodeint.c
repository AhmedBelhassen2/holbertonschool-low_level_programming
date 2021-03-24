#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new_nodeint_middle at a given position.
 * @head: Pointer to the first element of the listint
 * @idx: position of the new_nodeint_middle to insert
 * @n: the added value of the new_nodeint_middle.
 * Return: adress of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_nodeint_middle = malloc(sizeof(listint_t));
	listint_t *stock_next, *newP = *head;
	unsigned int j;

	if (head == NULL)
		return (NULL);
	if (new_nodeint_middle == NULL)
		return (NULL);
		new_nodeint_middle->n = n;
		if (idx == 0)
		{
			new_nodeint_middle->next = *head;
			*head = new_nodeint_middle;
				return (new_nodeint_middle);
		}
		for (j = 0; j < (idx - 1) && newP != NULL; j++)
		{
			newP = newP->next;
		}
		if (idx == 0)
			return (NULL);
		stock_next = newP->next;
		newP->next = new_nodeint_middle;
		new_nodeint_middle->n = n;
			new_nodeint_middle->next = stock_next;
		return (new_nodeint_middle);
}
