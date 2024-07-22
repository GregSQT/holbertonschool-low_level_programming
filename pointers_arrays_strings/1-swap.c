#include <stdio.h>
#include "main.h"
/* Short description */

/**
 * swap_int - Function
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
