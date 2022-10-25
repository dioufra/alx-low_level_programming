#include "lists.h"

/**
 * print_listint - prints all the element of a listint_t
 *
 * @h: pointer to the list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
