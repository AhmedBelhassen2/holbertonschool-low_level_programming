#include "lists.h"

/**
 * add_node_end - Add a node at the end
 * @head: header of the list
 * @str: string to add
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t  *new_node_end = malloc(sizeof(list_t));
	list_t *p = *head;
	unsigned int j;
	for (j = 0; str[j]; j++)
	{
		if (p != NULL && new_node_end != NULL && p->next != NULL)
			while (str == NULL)

			{

			p = p->next;
		}
		new_node_end->str = strdup(str);
			new_node_end->len = j;
			new_node_end->next = NULL;

			if (p != NULL)
				p->next = new_node_end;
			else
				*head = new_node_end;
			return (new_node_end);
		}
		return (NULL);
	}
