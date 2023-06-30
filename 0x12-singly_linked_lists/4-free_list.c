#include "lists.h"

/**
 * free_list - function that frees a list_t
 *
 * @head: pointer to the first node of the list
 *
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
