#include "main.h"

/**
 * _print_percent - prints '%'
 *
 * @list: arguments
 *
 * Return: always 1 (for the single character printed)
*/

int _print_percent(va_list list)
{
	(void)list;
	return (_putchar('%'));
}
