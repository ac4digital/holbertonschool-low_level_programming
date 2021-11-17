#include "lists.h"
#include <stddef.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a linked
 * list
 * @head: pointer to the head of a linked list
 * @index: node posisiton to delete
 * Return: 1 if it succeeded and -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *p_head, *prev;

	if (p_head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(p_head);
		p_head = *head;
	}
	else
	{
		for (count = 0; count < index - 1; count++)
		{
			if (p_head == NULL)
				return (-1);

			p_head = p_head->next;
		}

		prev = p_head;

		prev = prev->next->next;
		free(p_head->next);
		p_head->next = prev;
	}
	return (1);
}
