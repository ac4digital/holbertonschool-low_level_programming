#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the start of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		if (head->str != NULL)
			free(head->str);

		next = head->next;
		free(head);
		head = next;
	}

}
