#include "main.h"

/**
 * _print_octal - prints unsigned number in octal
 *
 * @list: arguments
 *
 * Return: number of printed characters;
*/
int print_octal(va_list list)
{
	int c;
	char unsign[];
	int i = size - 2;
	unsigned int num;
	unsigned int initial_num = num;

	num = va_arg(list, unsigned int);
	num = convert_size_uns(num, c);

	if (num == 0)
		unsign[i--] = '0';

	unsign[size - 1] = '\0';

	while (num > 0)
	{
		unsign[i--] = (num % 8) + '0';
		num /= 8;
	}

	if (initial_num != 0)
		unsign[i--] = '0';

	i++;

	return (write_uns(0, i));
}


