#include "lists.h"

/**
 * add_node - Add a node
 * @head: header of the list
 * @str: string to add
 * Return: An unsigned integer
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t  *new_node_begin = malloc(sizeof(list_t));
	int j = 0;

	while (str[j++])
		;
	if (new_node_begin != NULL)
	{

		new_node_begin->str = strdup(str);
		new_node_begin->len = j - 1;
		new_node_begin->next = *head;
		*head = new_node_begin;
		return (new_node_begin);
	}
	return (NULL);
}
