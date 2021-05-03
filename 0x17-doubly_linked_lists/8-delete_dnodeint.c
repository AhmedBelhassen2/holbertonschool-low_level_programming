#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a dnode list at the index
 * @head: header of the dlistint_t dnodeint
 * @index: the index of the dnode
 * Return: either 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *auxH, *adv;
	unsigned int j;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		auxH = *head;
		*head = (*head)->next;
		free(auxH);
		return (1);
	}
	adv = (*head);
	for (j = 0; (adv->next != NULL) && (j < index); j++)
	{
		auxH = adv;
		adv = adv->next;
	}
	if (j < index)
		return (-1);
	auxH->next = adv->next;
	free(adv);
	return (1);
}
