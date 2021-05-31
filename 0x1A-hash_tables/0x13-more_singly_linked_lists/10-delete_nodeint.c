#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node list at the index
 * @head: header of the listint_t nodeint
 * @index: the index of the node
 * Return: either 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *auxH, *adv;
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
