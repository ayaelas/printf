#include "main.h"

/**
 * handle - chooses the right function
 * for each specifier
 * *
 * * @s: the specifier
 * *
 * * Return: pointer to the right function
*/

int (*handle(char s))(va_list)
{
	specifier functions[] = {
	{'s', _print_str},
	{'c', _print_char},
	{'%', _print_percent},
	{'i', _print_int},
	{'d', _print_int},
	{'b', _print_binary}
	{'u', _print_unsigned}
	{'o', _print_octal}
	};
	int i;

	for (i = 0; i < 6; i++)
	{
		if (functions[i].c == s)
			return (functions[i].f);
	}
	return (NULL);
}
