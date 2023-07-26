#include "main.h"

/**
 * _print_octal - Prints an unsigned number in octal
 * @list: List of arguments
 * @unsign:array to handle print
 * @size: Size specifier
 * Return: Number of printed characters
 */
int _print_octal(va_list list, char unsign[], int size)
{

	int i = uns_size - 2;
	unsigned long int num = va_arg(list, unsigned long int);
	unsigned int initial_num = num;

	num = convert_size_uns(num, size);

	if (num == 0)
		buffer[i--] = '0';

	buffer[uns_size - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num % 8) + '0';
		num /= 8;
	}

	if (initial_num != 0)
		buffer[i--] = '0';

	i++;

	return (write_uns(0, i, size));
}

