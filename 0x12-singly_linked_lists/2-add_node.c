#include "lists.h"

/**
 * add_node - Add a node
 * @head: header of the list
 * @str: string to add
 * Return: new_node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t  *new_node_begin = malloc(sizeof(list_t));
	unsigned int j;

	if (new_node_begin != NULL)
	{
		for (j = 0; str[j]; j++)

		new_node_begin->str = strdup(str);
		new_node_begin->len = j;
		new_node_begin->next = *head;
		*head = new_node_begin;
		return (new_node_begin);
	}
	return (NULL);
}
