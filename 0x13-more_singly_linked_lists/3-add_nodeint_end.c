#include "lists.h"
#include <stddef.h>

/**
 * *add_nodeint_end - function that adds a new node at the end of
 * a singly linked list.
 * @head: pointer to the head of the singly linked list
 * @n: number to add to the new node
 * Return: the address of the new node or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *prev;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	prev = *head;

	while (prev->next != NULL)
	{
		prev = prev->next;
	}

	new->n = n;
	new->next = NULL;
	prev->next = new;

	return (new);
}
