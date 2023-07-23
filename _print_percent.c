#include "main.h"

/**
 * _print_percent - prints '%'
 *
 * Return: always 1 (for the single character printed)
*/

int _print_percent(void)
{
    char percent = '%';

    write(1, &percent, 1);

    return (1);
}