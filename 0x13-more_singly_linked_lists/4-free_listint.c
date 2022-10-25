#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: list to be freed
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head->next);
		head = head->next;
	}
}
