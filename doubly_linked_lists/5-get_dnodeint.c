#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/* Short description */

/**
 * get_dnodeint_at_index - This is a function description
 * @head: Parameter 1
 * @index: parameter 2
 * 
 * Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; head->next != NULL; i++)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
	}

	return (NULL);
}
