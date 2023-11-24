#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_c - Prints characters
 * @c_list: Character
 * Return: 1: The lenght of a char
 */

int print_c(va_list c_list)
{
        char s;

        s = va_arg(c_list, int);
        _putchar(s);
        return (1);
}

/**
 * print_s - Prints strings
 * @s_list: Strings
 * Return: The lenght of the string
 */

int print_s(va_list s_list)
{
        int count;
        char *str = va_arg(s_list, char *);

        if (str == NULL)
                str = "(null)";
        for (count = 0; str[count]; count++)
        {
                _putchar(str[count]);
        }
        return (count);
}

/**
 * print_i - Prints integer
 * @i_list: Int to print
 * Return: Numbers of integers printed
 */

int print_i(va_list i_list)
{
        long int number = (long int)va_arg(i_list, int);
        long int l = 1;
long int t = number;
        int r = 1;

        if (number < 0)
        {
                _putchar('-');
                r++;
                t = t * -1;
                number = number * -1;
        }
        while (t > 9)
        {
                t = t / 10;
                l = l * 10;
                r++;
        }
        while (l > 0)
        {
                _putchar('0' + (number / l) % 10);
                l = l / 10;
        }

        return (r);
}

/**
 * print_d - Prints decimal
 * @d_list: Int to print
 * Return: Numbers of decimals printed
 */

int print_d(va_list d_list)
{
        long int number = (long int)va_arg(d_list, int);
        long int l = 1;
        long int t = number;
        int r = 1;

        if (number < 0)
        {
                _putchar('-');
                r++;
		t = t * -1;
                number = number * -1;
        }
        while (t > 9)
        {
                t = t / 10;
                l = l * 10;
                r++;
        }
        while (l > 0)
        {
                _putchar('0' + (number / l) % 10);
                l = l / 10;
        }

        return (r);
}

                                                     
                                              
