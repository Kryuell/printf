#include "main.h"
/**
 * _printf - Produces output according to a format.
 * @format: A character string containing format specifiers.
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;
    int spec_count = 0; /* Declare spec_count at the beginning */

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            
            switch (*format)
            {
                case 'c':
                    spec_count = print_c(args);
                    break;
                case 's':
                    spec_count = print_s(args);
                    break;
                case 'd':
                case 'i':
                    spec_count = print_d(args);
                    break;
                case '%':
                    spec_count = print_percent(args);
                    break;
                default:
                    _putchar('%');
                    if (*format)
                    {
                        _putchar(*format);
                        spec_count = 2;
                    }
                    else
                        spec_count = 1;
                    break;
            }

            count += spec_count;
        }
        else
        {
            _putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);
    return count;
}
