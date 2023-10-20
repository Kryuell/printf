#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - struct prot
 * @str: the format
 * @ope: The function associated
 *
 * Return: noting
 */

typedef struct format
{
	char *str;
	int (*ope)();
} convert_match;

int print_pointer(va_list val);
int print_hex_aux(unsigned long int num);
int print_HEX_aux(unsigned int num);
int print_exclusive_string(va_list args);
int print_HEX(va_list args);
int print_hex(va_list args);
int print_oct(va_list vrgs);
int print_unsigned(va_list args);
int print_bin(va_list args);
int print_srev(va_list args);
int print_rot13(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);

/*hendle*/
int print_int(va_list args);
int print_dec(va_list args);

/* printf */
int print_percent(void);
int print_char(va_list arg);
int print_string(va_list arg);
int _putchar(char c);
int _printf(const char *format, ...);


#endif
