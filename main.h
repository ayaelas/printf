#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char *format, ...);
int _print_char(char c);
int _print_str(char *s);
int _print_percent(void);

#endif /* #ifndef HEADER_H */

