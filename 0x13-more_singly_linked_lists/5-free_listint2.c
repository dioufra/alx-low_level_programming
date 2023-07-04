#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t
 *
 * @head: pointer to the first node of the list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *pt;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		pt = *head;
		*head = pt->next;
		free(pt);
	}
}
