#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char *format, ...);
void _print_char(char c);
int _print_str(char *s, int *i);

#endif /* #ifndef HEADER_H */