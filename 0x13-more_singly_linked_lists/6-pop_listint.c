#include "lists.h"

/**
 * pop_listint - delete the head node
 * @head: the listint to be printed
 * Return: modified listint
 */

int pop_listint(listint_t **head)
{
	int b;
	listint_t  *auxH;

	if (*head == NULL)
		return (0);
	auxH = (*head)->next;
	b = auxH->n;
	free(*head);
	*head = auxH;
	return (b);
}
