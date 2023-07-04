#include "lists.h"

/**
 * add_nodeint - adds a new node at the end of a list_t list.
 *
 * @head: pointer to the first node of list,
 * @n: value to add to the newly created list.
 *
 * Return: the address of the new element, or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode, *currentNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
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
