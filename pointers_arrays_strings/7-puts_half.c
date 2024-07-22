#include <stdio.h>
#include "main.h"
#include <unistd.h>
/* Short description */

/**
 * _strlen - This is a function description
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
 * puts_half - Description
 * @str: First parameter
 *
 * return: void
 */
void puts_half(char *str)
{
	int i;
	int length = _strlen(str);
	int start_i;

	if (length % 2 == 0)
		start_i = length / 2;
	else
		start_i = length / 2 + 1;

	for (i = start_i; i < length; i++)
	{
		char c[1];

		c[0] = str[i];
		write(STDOUT_FILENO, c, 1);
	}
	write(STDOUT_FILENO, "\n", 1);
}
