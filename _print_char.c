#include "main.h"

/**
 * _print_char - prints a character
 *
 * @c: the character to print
 *
 * Return: 1 (for the single character printed)
*/

int _print_char(char c)
{
    write(1, &c, 1);

    return (1);
}