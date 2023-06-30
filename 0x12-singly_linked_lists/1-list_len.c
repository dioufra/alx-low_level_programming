#include "lists.h"

/**
 * list_len - prints all elements of a list
 *
 * @h: pointer to the first head of the list;
 *
 * Return: the number of nodes.
 *
 * if str is NULL print [0] (nil)
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
