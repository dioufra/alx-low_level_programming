#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 *
 * @head: A pointer to the first node
 * @str: The string to add
 * Return: The address of the new element,
 * or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnOde, *lastnOde;
	char *sdup;
	int len;

	newnOde = malloc(sizeof(list_t));

	if (newnOde == NULL)
		return (NULL);

	sdup = strdup(str);

	if (sdup == NULL)
	{
		free(newnOde);
		return (NULL);
	}

	for (len = 0; str[len]; len++)
		;

	newnOde->len = len;
	newnOde->str = sdup;
	newnOde->next = NULL;

	if (*head == NULL)
		*head = newnOde;
	else
	{
		lastnOde = *head;

		while (lastnOde->next != NULL)
		{
			lastnOde = lastnOde->next;
		}

		lastnOde->next = newnOde;
	}

	return (newnOde);
}
