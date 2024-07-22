#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/* Short description */

/**
 * add_dnodeint - This is a function description
 * dlistint_t : First Parameter
 * @head: Parameter 1
 * @new_data: Parameter 2
 * Return: new code
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int new_data)
{
	dlistint_t *new_node = (struct dlistint_s *)malloc(sizeof(struct dlistint_s));

	if (new_node == NULL)
	{
		dprintf(2, "Error, can't malloc\n");
		return (NULL);
	}

	new_node->n = new_data;
	new_node->prev = (*head);
	new_node->next = NULL;

	if ((*head) != NULL)
		(*head)->next = new_node;
	/* Make the pointer point to new head (new mode) */
	(*head) = new_node;
	return (new_node);
}
