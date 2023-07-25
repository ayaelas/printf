#include "main.h"

/**
 * _putchar - prints a character
 *
 * @c: the character to print
 *
 * Return: 1 if successful -1 if not
*/

int _putchar(char c)
{
	static char buff[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buff, i);
		i = 0;
	}
	if (c != -1)
	{
		buff[i] = c;
		i++;
	}
	return (1);
}

/**
 * _puts - prints a string
 *
 * @s: the string to print
 *
 * Return: number of printed characters
*/

int _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}

