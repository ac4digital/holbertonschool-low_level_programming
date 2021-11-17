#include "lists.h"
#include <stddef.h>

/**
 * free_listint - function that frees a singly linked list
 * @head: pointer to the head of the singly linked list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *p_next;

	if (head != NULL)
	{
		if (head->next != NULL)
			free_list(head->next);

		free(head);
	}
}
