#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/* Short description */

/**
 * free_dlistint - This is a function description
 * @head: Parameter 1
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
