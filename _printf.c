#include "main.h"
#include <stdlib.h>

/**
 * _printf - Function that prints with a format
 * @format: Format passed to printf
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list mylist;
	int (*f)(va_list);

                j++;
            }
	    i++;
        }
        else if (format[i] == '%' && format[i+1] == '%')
        {
            _putchar('%');
            len++;
            i++;
        }
        else
        {
            _putchar(format[i]);
            len+=1;

	i++;
        }
    }
    return len;
    va_end(list);
	va_start(mylist, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		f = check_formats(&format[i + 1]);
		if (f != NULL)
		{
			count += f(mylist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(mylist);
	return (count);
}
