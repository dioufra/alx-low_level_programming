#include "lists.h"

/**
 * listint_len - returns  the number of  elements of a listint_t list
 *
 * @h: pointer to the first node of the list
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
