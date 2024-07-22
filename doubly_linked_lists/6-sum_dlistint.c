#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/* Short description */

/**
 * sum_dlistint - This is a function description
 * @head: Parameter 1
 *
 * Return: result
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		result = result + head->n;
		head = head->next;
	}

	return (result);
}
