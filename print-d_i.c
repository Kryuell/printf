#include "main.h"
#include <stdarg.h>

/**
 * print_d - Handles the %d conversion specifier.
 * @args: A va_list containing the argument to print.
 * Return: The number of characters printed.
 */
int print_d(va_list args)
{
    int n = va_arg(args, int);
    int len = 0;
    if (n < 0)
    {
        _putchar('-');
        n = -n;
        len++;
    }
    len += print_number(n);
    return len;
}

/**
 * print_i - Handles the %i conversion specifier.
 * @args: A va_list containing the argument to print.
 * Return: The number of characters printed.
 */
int print_i(va_list args)
{
    return print_d(args);
}

/**
 * print_number - Helper function to print a number.
 * @n: The number to print.
 * Return: The number of characters printed.
 */
int print_number(int n)
{
    if (n / 10)
        return 1 + print_number(n / 10);
    _putchar(n % 10 + '0');
    return 1;
}
