#include "main.h"

/**
 * _print_unsigned - prints an unsigned number
 * @unsign:array
 * @list: arguments
 * @size: specifer size
 * Return: number of printed characters;
*/
int _print_unsigned(va_list list, char unsign[], int size)
{
	int i =  uns_size - 2;
	unsigned long int num = va_arg(list, unsigned long int);

	num = convert_size_uns(num, size);

	if (num == 0)
		unsign[i--] = '0';

	unsign[uns_size - 1] = '\0';

	while (num > 0)
	{
		unsign[i--] = (num % 10) + '0';
		num /= 10;
	}

	i++;

	return (write_uns(0, i, size));
}

