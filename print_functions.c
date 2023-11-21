#include "main.h"

int print_char(va_list char_list)
{
    char letter = va_arg(char_list, int);
    putchar(letter);

    return 1;
}

int print_string(va_list string_list)
{
    char *str;
    int i;
    str = va_arg(string_list, char*);

    for (i = 0; str[i] != '\0'; i++)
        _putchar(str[i]);

    return i;
}










