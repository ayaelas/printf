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
    
    if (format == NULL)
	{
        return (-1);
    }

    while (format[i] && format != '\0')
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
					write(1, &format[i + 1], 1);
					counter++;
					break;
			}
			i += 2;
		}
        else
		{
			write(1, &format[i], 1);
			counter++;
			i++;
        }

	}

	va_end(list);
	return (counter);
}