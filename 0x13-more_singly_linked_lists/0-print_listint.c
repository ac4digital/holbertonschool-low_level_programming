#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - print all the elements of a listint_t
 * singly linked list.
 * @h: singly linked list to print
 * Return: number of the elements in the singly linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (NULL);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (0);
}
