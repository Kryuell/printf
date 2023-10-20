#include "main.h"

/**
 * _printf - Custom printf function
 * @format: The format string with placeholders
 * @...: Variable number of arguments
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	convert_match m[] = {
		{"%c", print_char}, {"%s", print_string}, {"%%", print_percent},
		{"%i", print_int}, {"%d", print_dec}, {"%r", print_srev},
		{"%R", print_rot13}, {"%b", print_bin}, {"%u", print_unsigned},
		{"%o", print_oct}, {"%x", print_hex}, {"%X", print_hex_aux},
		{"%S", print_exclusive_string}, {"%p", print_pointer}
	};

	va_list args;
	int i = 0, len = 0;
	int j;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].str[0] == format[i] && m[j].str[1] == format[i + 1])
			{
				len = len + m[j].ope(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}

Here:
	va_end(args);
	return (len);
}
