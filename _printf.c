#include "main.h"


/**
* _printf : print a function
* Return: number of the printed chars
* @format: format
*/

int _printf(const char *format,...)
{
	int i = 0, counter = 0;

	va_list list;  
    va_start(list, format);


    
    if (!format || (format[0] == '%' && !format[1]))
        return (-1);
    if (format[0] == '%' && format[0] == ' ' && !format[2])
		return (-1);
	

    while (format[i])
    {
        if(format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					counter += _print_char(va_arg(list, int));
					break;
				case 's':
					counter += _print_str(va_arg(list, char *));
					break;
				case '%':
					counter += _print_percent();	
					break;				
				default:
					counter += _print_percent();
					if (format[i + 1])
						write(1, &format[i + 1], 1);
					counter++;
					break;
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