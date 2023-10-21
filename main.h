#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/* Function to print a character */
int _putchar(char c);

/* Custom printf function */
int _printf(const char *format, ...);

/* Function to print %c */
int print_c(va_list args);

/* Function to print %s */
int print_s(va_list args);

/* Function to print %% */
int print_percent(va_list args);

/* Function to print %d and %i */
int print_number(int n);
int print_d(va_list args);
int print_i(va_list args);

#endif /* MAIN_H */
