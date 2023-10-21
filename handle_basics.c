#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * print_c - Handles the %c conversion specifier.
 * @args: A va_list containing the argument to print.
 * Return: The number of characters printed.
 */
int print_c(va_list args)
{
    char c = va_arg(args, int);
    _putchar(c);
    return 1;
}

/**
 * print_s - Handles the %s conversion specifier.
 * @args: A va_list containing the argument to print.
 * Return: The number of characters printed.
 */
int print_s(va_list args)
{
    char *str = va_arg(args, char*);
    int count = 0;

    if (str == NULL)
        str = "(null)";

    for (; *str; str++)
    {
        _putchar(*str);
        count++;
    }
    return count;
}

/**
 * print_percent - Handles the %% conversion specifier.
 * @args: A va_list (unused).
 * Return: The number of characters printed (always 1 for '%').
 */
int print_percent(va_list args)
{
    (void)args;
    _putchar('%');
    return 1;
}
