#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 *
 * @head: first node of the list
 * @index: index of the node to return
 *
 * Return: pointer to the node of interet, or a NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	if (i == index)
		return (tmp);

	return (NULL);
}
