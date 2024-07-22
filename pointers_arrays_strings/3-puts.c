#include <stdio.h>
#include "main.h"
/* Short description */

/**
 * puts.c - This is a function description
 * @s: First parameter
 *
 * Return: void
 */
 int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
/**
 * _puts
 */
void _puts(char *str)
{
	write(STDOUT_FILENO, str, _strlen(str));
	write(STDOUT_FILENO, "\n", _strlen("\n"));
}
