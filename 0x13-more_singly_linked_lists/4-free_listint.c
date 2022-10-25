#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: list to be freed
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	lisint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(tmp);
		head = tmp;
	}
}
