#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to the list
 * @str: string to add to the newly created mode
 *
 * Return: address of the new element, or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int len;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}
