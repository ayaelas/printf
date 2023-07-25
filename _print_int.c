#include "main.h"

/**
 * _print_int - prints an integer
 *
 * @list: arguments
 *
 * Return: number of printed characters
*/

int _print_int(va_list list)
{
	int num = va_arg(list, int);
	int len = digit_count(num);

	if (num <= 0)
	    len++;
	_printn(num);
	return (len);
}

/**
 * _printn - prints number recursively
 *
 * @n: integer to be printed
 *
 * Return: void
*/
void _printn(int n)
{
	unsigned int n2;

	if (n < 0)
	{
		_putchar('-');
		n2 = -n;
	}
	else
		n2 = n;

	if (n2 / 10)
		_printn(n2 / 10);
	_putchar((n2 % 10) + '0');
}

/**
 * digit_count - strlen but for integers
 * !!! Doesn't take minus sign into account
 *
 * @n: the number
 *
 * Return: number of digits
*/
int digit_count(int n)
{
	int count = 0;

	for (count = 0; n != 0; count++)
		n /= 10;
	return (count);
}
