#include <stdio.h>
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
 * puts2 - Description
 * @str: First parameter
 *
 * return: void
 */
void puts2(char *str)
{
	int length = _strlen(str);
	int i;

	for (i = 0; i < length; i = i + 2)
	{
		char s[1];

		s[0] = str[i];
		write(STDOUT_FILENO, s, 1);
	}
	write(STDOUT_FILENO, "\n", 1);
}
