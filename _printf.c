#include "holberton.h"

/**
 *  _printf - function to print string of caracters and mnumbers
 *  @format: string to be printed
 *  Return: nothing
 */
int _printf(const char * const format, ...)
{
	va_list arg;
	int h = 0, j;
	char *t;

	va_start(arg, format);
	while (format[h])
	{
		if (format[h] == '%')
		{
			h++;
			switch (format[h])
			{
				case 'c':
				_putchar((char) va_arg(arg, int));
				break;
				case 's':
				t = va_arg(arg, char *);
				for (j = 0; t[j] != '\0'; j++)
					_putchar(t[j]);
			}
		}
		else if (format[h] == '\\')
		{
			h++;
			switch (format[h])
			{
				case 'n':
				_putchar('\n');
				break;
			}
		}
		else
			_putchar(format[h]);
		h++;
	}
	va_end(arg);
	return (h);
}
