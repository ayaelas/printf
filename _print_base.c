#include "main.h"

/**
 * _print_binary - prints the binary equivalent of a positive integer
 *
 * @list: arguments
 *
 * Return: number of printed characters;
*/
int _print_binary(va_list list)
{
	unsigned int num;
	int binary[32];
	int count = 0;
	int i, j;
	char bb;

	num = va_arg(list, unsigned int);

	if (num == 0)
	{
	_putchar('0');
	return (1);
	}

	for (i = 0; num > 0; i++)
	{
		binary[i] = num % 2;
		num /= 2;
	}

	for (j = i - 1; j >= 0; j--)
	{
		bb = '0' + binary[j];
		_putchar(bb);
		count++;
	}
	return (count);
}
