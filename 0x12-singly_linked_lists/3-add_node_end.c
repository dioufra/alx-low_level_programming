#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: pointer to the first node of list,
 * @str: string to add to the newly created list.
 *
 * Return: the address of the new element, or NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *currentNode;

	int len;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;

	else
	{
		currentNode = (*head);

		while (currentNode->next != NULL)
			currentNode = currentNode->next;

		currentNode->next = newNode;

	}

	return (newNode);
}
