#include "main.h"
#include <stdarg.h>
/**
 * print_int - Print an integer.
 * @args: Argument list containing the integer
 * Return: The number of characters printed
 */
int print_int(va_list args)
{
    int n = va_arg(args, int);
    int count = 0;

    int exp = 1;
    int num = n;

    if (n < 0)
    {
        _putchar('-');
        count++;
        n = -n;
    }

    while (num > 9)
    {
        num /= 10;
        exp *= 10;
    }
    do {
        int digit = n / exp;

        _putchar(digit + '0');
        n %= exp;
        exp /= 10;
        count++;
    } while (exp > 0);

    return count;
}

/**
 * print_dec - prints a decimal
 * @args: argument to print
 * Return: number of characters printed
 */
int print_dec(va_list args)
{
    int n = va_arg(args, int);
    int i = 0;

    int exp = 1;
    int num = n;

    if (n < 0)
    {
        _putchar('-');
        n = -n;
        i++;
    }

    if (n == 0)
    {
        _putchar('0');
        return 1;
    }

    while (num > 9)
    {
        num /= 10;
        exp *= 10;
    }

    while (exp > 0)
    {
        int digit = n / exp;

        _putchar(digit + '0');
        n %= exp;
        exp /= 10;
        i++;
    }

    return i;
}
