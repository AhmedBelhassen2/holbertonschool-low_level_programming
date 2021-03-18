#include "lists.h"

/**
 * add_node_end - Add a node at the end
 * @head: header of the list
 * @str: string to add
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t  *new_node = malloc(sizeof(list_t));
	list_t *p = *head;
	unsigned int j;
	if (p != NULL && new_node != NULL)
	{
		for (j = 0; str[j]; j++)

			new_node->str = strdup(str);
			new_node->len = j;
			new_node->next = NULL;

			if (p != NULL)
				p->next = new_node;
			else
				*head = new_node;
			return (new_node);
		}
		return (NULL);
	}
