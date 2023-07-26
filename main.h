#ifndef HEADER_H
#define HEADER_H

/* Header files */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct specifier - specifier and
 * its appropriate printing function
 *
 * @c: the specifier
 * @f: pointer to its appropriate printing function
*/
typedef struct specifiers
{
	char c;
	int (*f)(va_list ap);
} specifier;

/* Function Prototypes */
int _printf(const char *format, ...);
int (*handle(char s))(va_list);

int _print_percent(va_list list);
int _print_binary(va_list list);
int _print_char(va_list list);
int _print_str(va_list list);
int _print_int(va_list list);

int digit_count(int n);
void _printn(int n);

int _putchar(char c);
int _puts(char *s);


#endif /* #ifndef HEADER_H */

