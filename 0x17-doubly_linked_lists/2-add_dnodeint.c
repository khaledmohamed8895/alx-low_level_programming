#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning
 * @head: ptr to double list
 * @n: data inger
 *
 * Return:  address of the new node or null
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!head || !new)
		return (new ? free(new), NULL : NULL);

	new->n = n;
	new->prev = NULL;
	if (!*head)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
