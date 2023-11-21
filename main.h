#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct print_data
{
	char *type;
	int (*print)(va_list list);
}print_data;


int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list char_list);
int print_string(va_list string_list);

#endif
