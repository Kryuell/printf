#include "main.h"

/**
 * print_exclusive_string - Print exclusive string.
 * @args: Argument list containing the string.
 * Return: Number of characters printed.
 */
int print_exclusive_string(va_list args)
{
	char *s;
	int i, len = 0;
	int cast;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i]; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			cast = s[i];

			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			len += print_hex_aux(cast);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}

	return (len);
}

