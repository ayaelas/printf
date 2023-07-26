#include "main.h"

/**
 * _print_unsigned - prints an unsigned number
 *  @list: arguments
 *  Return: number of printed characters;
*/

int print_unsigned(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int i = size - 2;
	int unsign[];

	if (num == 0)
		unsign[i--] = '0';
	unsign[size - 1] = '\0';

	if (num > 0)
	{
		unsign[i--] = (num % 10) + '0';
		num /= 10;
	}
	i++;
}

