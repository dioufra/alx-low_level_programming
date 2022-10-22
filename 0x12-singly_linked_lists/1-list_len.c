#include "lists.h"

/**
 * list_len - Returns the number of elements in a list_t list
 *
 * @h: The linked list
 * Return: The length of the link
 */

size_t  list_len(const list_t *h)
{
	size_t elm = 0;

	while (h != NULL)
	{
		h = h->next;
		elm++;
	}

	return (elm);
}
