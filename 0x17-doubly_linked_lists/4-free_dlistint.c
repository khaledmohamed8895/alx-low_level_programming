#include "lists.h"

/**
 * free_dlistint - function that free list
 * @head: ptr to double list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		while (head->next != NULL)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}
