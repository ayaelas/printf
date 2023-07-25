#include "main.h"

/**
 * _print_char - prints a character
 *
 * @list: arguments
 *
 * Return: 1 (for the single character printed)
*/

int _print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

