#include "main.h"
int percent_check(const char *s);

/**
 * _printf - a remake of C's printf function
 *
 * @format: input string
 *
 * Return: number of characters printed
 * or (-1) in case of an error
 */

int _printf(const char *format, ...)
{
	int i = 0, counter = 0;
	va_list list;

	va_start(list, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
				counter += _print_char(va_arg(list, int));
			else if (format[i + 1] == 's')
				counter += _print_str(va_arg(list, char *));
			else if (format[i + 1] == '%')
				counter += _print_percent();
			else
			{
				if (format[i + 1])
				{
					if (percent_check(&format[i + 1]) != -1)
						write(1, &format[i + 1], 1);
					else
						return (0);
				}
				else
					return (counter);
				counter++;
			}
			i += 2;
		}
		else
		{
			counter += _print_char(format[i]);
			i++;
		}
	}
	va_end(list);
	return (counter);
}

int percent_check(const char *s)
{
	int i = 0, c = -1;

	while (s[i] != '\0')
	{
		if (s[i] != ' ')
		{
			if (c == -1)
				c = 0;
		}
		i++;
	}
	return (c);
}
