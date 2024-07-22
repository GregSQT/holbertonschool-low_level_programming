#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/* Short description */

/**
 * dlistint_t - This is a function description
 * @head: Parameter 1
 * @idx: Parameter 2
 * @n: Parameter 3
 *
 * Return: NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node;

	if (head == NULL)
		return NULL;

	while (head != NULL)
		(*head) = (*head)->next;

	for (i = 0; head != NULL; i++)
	{
		if (i == idx)
		{
			new_node = (struct dlistint_s *)malloc(sizeof(struct dlistint_s));

			new_node->n = n;
			new_node->next = (*head);
			new_node->prev = (*head)->prev;

			if ((*head) != NULL)
				(*head)->prev = new_node;
			if ((*head)->prev != NULL)
				(*head)->prev->next = new_node;

			(*head) = new_node;
			return (new_node);
		}
	}

	return (NULL);
}
