#include "main.h"
#include <stdlib.h>

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
	int n = va_arg(i_list, int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * print_d - Prints decimal
 * @d_list: Int to print
 * Return: Numbers of decimals printed
 */

int print_d(va_list d_list)
{
	int n = va_arg(d_list, int);
	int num, last = n % 10, digit;
	int  i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
