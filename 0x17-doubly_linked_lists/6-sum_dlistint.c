#include "lists.h"

/**
 * sum_dlistint - function that sum all nodes
 * @head: ptr to double list
 * Return: sum of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	else
	{
		temp = head;

		while (temp)
		{
			sum = sum + temp->n;
			temp = temp->next;
		}

		return (sum);
	}
}
