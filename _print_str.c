#include "main.h"

/**
 * _print_str - prints a string
 *
 * @list: arguments
 *
 * Return: number of output characters.
*/

int _print_str(va_list list)
{
	char *s = va_arg(list, char *);

	if (!s)
		s = "(null)";
	return (_puts(s));
}
