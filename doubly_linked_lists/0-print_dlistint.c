#include <stdio.h>
#include "lists.h"
/* Short description */

/**
 * print_dlistint - This is a function description
 * dlistint_t : First Parameter
 * @h: Parameter 2
 * .
 * Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count = count + 1;
	}

	return (count);
}
