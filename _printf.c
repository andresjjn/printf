#include "holberton.h"

/**
 *  _printf - Function to print string of caracters and numbers
 *  @format: String to be printed and indicators to print
 *  Return: Number of chars printed.
 */
int _printf(const char * const format, ...)
{
	va_list arg;
	int h = 0, v = 0, i = 0;

	va_start(arg, format);
	if (format == NULL || (format[h] == '%' && format[h + 1] == '\0'))
		return (-1);
	while (format[h])
	{
		if (format)
		{
		if (format[h] == '%' && format[h + 1])
		{
			h++;
			i = porcent(format, h, arg);
			v = v - i + 2;
		}
		else if (format[h] == '\\')
		{
			h++;
			back(format, h);
			v++;
		}
		else
			_putchar(format[h]);
		h++;
	}
	else
	return (-1);
	}
	va_end(arg);
	return (h - v);
}
