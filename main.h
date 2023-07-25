#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

typedef struct specifiers
{
	char c;
	int (*f)(va_list ap);
} specifier;

int _printf(const char *format, ...);
int _print_str(va_list list);
int _print_char(va_list list);
int _print_percent(va_list list);
int _putchar(char c);
int _puts(char *s);
int (*handle(char s))(va_list);

#endif /* #ifndef HEADER_H */

