#include "main.h"

/**
 * handle - chooses the right function
 * for each specifier
 * 
 * @s: the specifier
 * 
 * Return: pointer to the right function
*/

int (*handle(char s))(va_list)
{
    specifier functions[] = {
        {'s', _print_str},
        {'c', _print_char},
        {'%', _print_percent}
    };

    int i;
    
    for (i = 0; i < 3; i++)
    {
        if (functions[i].c == s)
            return (functions[i].f);
    }

    return (NULL);
}