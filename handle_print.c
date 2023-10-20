#include "main.h"

/**
 * print_char - prints a character multiple times
 * @arg: character to be printed
 * Return: 1
 */
int print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
		_putchar(c);

		return (1);
}

/**
 * print_string - Print a string
 * @arg: string to be printed
 * Return: The number of characters printed
 */
int print_string(va_list arg)
{
	char *s = va_arg(arg, char *);
	int words = (s != NULL) ? _strlen(s) : 6;
	int i;

	for (i = 0; i < words; i++)
	_putchar((s != NULL) ? s[i] : "(null)"[i]);

	return (words);
}


/**
 * print_percent - prints the percent.
 *
 * Return: 1.
 */
int print_percent(void)
{
	_putchar(37);
	return (1);
}
