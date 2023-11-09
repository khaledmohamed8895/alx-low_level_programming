#include "lists.h"

/**
 * dlistint_len - print  number of elements of doubly linked list
 * @h: ptr to list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_elements = 0;

	while (h)
	{
		num_elements++;
		h = h->next;
	}
	return (num_elements);
}
