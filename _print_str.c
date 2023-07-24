#include "main.h"

/**
 * _print_str - prints a string
 *
 * @s: pointer to the string
 *
 * Return: number of output characters.
*/

int _print_str(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);

	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}

	return (i);
}
