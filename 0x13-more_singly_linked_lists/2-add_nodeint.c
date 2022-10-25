#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a listint_t list
 *
 * @head: pointer to the first node of the list
 * @n: value to insert to the newly created node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
