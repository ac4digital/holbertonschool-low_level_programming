#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);

	if (h->str == NULL)
		printf("[%d] %s\n", 0, "(nil)");
	else
		printf("[%u] %s\n", h->len, h->str);

	if (h->next != NULL)
		return (print_list(h->next) + 1);

	return (1);
}
