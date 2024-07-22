#include <stdio.h>
/* Short description */

/**
  * print_array - Function
 * @s:  Parameter 1
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
 * _strcpy - Description
 * @dest: First parameter
 * @src: First parameter
 *
 * return: a char
 */
char *_strcpy(char *dest, char *src)
{
	int length = _strlen(src);
	int i;

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}

	return dest;
}
