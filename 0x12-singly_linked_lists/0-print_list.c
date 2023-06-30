#include "lists.h"

/**
 * print_list - prints all elements of a list
 *
 * @h: pointer to the first head of the list;
 *
 * Return: the number of nodes.
 *
 * if str is NULL print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t count;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
