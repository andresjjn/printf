#include "holberton.h"

/**
 *  _printf - Function to print string of caracters and numbers
 *  @format: String to be printed and indicators to print
 *  Return: Number of chars printed.
 */
int _printf(const char * const format, ...)
{
	va_list arg;
	int h = 0;

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
