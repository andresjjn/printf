#include "holberton.h"

/**
 *  _printf - function to print string of caracters and mnumbers
 *  @format: string to be printed
 *  Return: nothing
 */
int _printf(const char * const format, ...)
{
	va_list arg;
	int h = 0, j, i;
	char *t;

	va_start(arg, format);
	while (format[h])
	{
		if (format[h] == '%')
		{
			h++;
			porcent(format, h, arg);
		}
		else if (format[h] == '\\')
		{
			h++;
			back(format, h);
		}
		else
			_putchar(format[h]);
		h++;
	}
	va_end(arg);
	return (h);
}
