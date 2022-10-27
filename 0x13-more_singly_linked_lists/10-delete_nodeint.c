#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at a given position
 *
 * @head: pointer to the first node
 * @index: index or position
 *
 * Return: On success (1), or (-1) on failure
 */
int *delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *del = NULL;
	listint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (tmp != NULL || tmp->next != NULL)
			return (-1);

		tmp = tmp->next;
		i++;
	}

	del = tmp->next;
	tmp->next = del->next;
	free(del);

	return (1);
}
