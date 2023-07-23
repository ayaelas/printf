#include <stdio.h>
#include "main.h"
#include <stdarg.h>


/**
*_printf : print a function
*Return: number of the printed chars
*@format: format
*/

void print_var(char var[], int *a);

int _printf(const char *format,...)
{
	va_list list;  
    char var[size]; 
    int i, outputs=0 , c=0; 

	int  a = 0;
    va_start(list, format);
    
    if (format == NULL)
	{
        return -1;
    }

    while (format[i] && format != '\0')
    {
        if(format[i] == '%')
		{

			print_var(var , &a);
    		++i;
			outputs = handle_print(format, &i, list, var);
			if (outputs == -1)
				return -1;
			c += outputs;
		}
        else
		{
		format[i] = var[a++] ;
		if (a == size)
			{
			write(1, &format[i], 1);
			print_var(var , &a);
			c++;
			}
        }
	}
	print_var(var, &a);
	va_end(list);
	return (c);
}

/*
*print_var : prints the buffer's content 
*@var : number of characters
*@a : the inder where the next char is added
*/
void print_var(char *buffer, int *a){ 
	if (*a > 0)
		write(1, &var[0], *a);
	*a = 0;
}
