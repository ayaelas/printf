#include "main.h"

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
	int (*pf)(va_list);
	const char *p;
	va_list ap;
	int count = 0;

	va_start(ap, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
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
				count += _putchar('%');
				continue;
			}
			pf = handle(*p);
			count += (pf)
				? pf(ap)
				: _printf("%%%c", *p);
		}
		else
			count += _putchar(*p);
	}
	_putchar(-1);
	va_end(ap);
	return (count);
}
