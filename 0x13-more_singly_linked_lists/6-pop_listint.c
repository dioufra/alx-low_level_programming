#include "lists.h"

/**
 * pop_listint - deletes the head node if a linked list
 *
 * @head:pointer to the first node of the list
 *
 * Return: data of the deleted element or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int value;

	if (*head == NULL)
		return (0);

	value = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (value);
}
