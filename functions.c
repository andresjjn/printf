#include "holberton.h"

/**
 * print_str - print strings
 * @s: string
 * Return: integer
 */
int print_str(char *s)
{
	int x;

	if (s == NULL)
		s = "(null)";
	for (x = 0; s[x] != '\0'; x++)
		_putchar(s[x]);
	return (x);
}

/**
 * print_number - write a function that print integers
 * @n: this is an integer
 * Return: an iteration
 */
int print_number(int n)
{
	unsigned int l, h = 0;

	if (n <= INT_MAX && n >= INT_MIN)
	{
		if (n < 0)
		{
			l = -n;
			_putchar('-');
		}
		else
		{
			l = n;
		}
		if (l / 10)
		{
			print_number(l / 10);
		}
		h++;
		_putchar(l % 10 + '0');
	}
	else
	{
		return (-1);
	}
	return (h);
}

/**
 * porcent - search for case after %
 * @format: string to be evaluated
 * @h: number of iterations
 * @arg: argument from the list
 * Return: Always 0 (Success)
 */
int porcent(const char *format, int h, va_list arg)
{
	int i, j = 0;
	char *s;

	switch (format[h])
	{
		case 'c':  /*this prints a single char*/
			/*_putchar((char) va_arg(arg, int));*/
			i = _print_putchar((char) va_arg(arg, int));
			return (i);
		case 's': /*this prints a string*/
			s = va_arg(arg, char *);
			j = print_str(s);
			return (j);
		case '%':
			_putchar('%');
			return (1);
			break;
		case 'd':
			i = va_arg(arg, int);
			j = print_number(i);
			return (j);
		case 'i':
			i = va_arg(arg, int);
			j = print_number(i);
			return (j);
	}
	return (0);
}

/**
 * back - identify new line
 * @format: string to be evaluated
 * @h: integer iteration function
 * Return: Always 0 (Success)
 */
void back(const char *format, int h)
{
	switch (format[h])
	{
		case 'n':
			_putchar('\n');
			break;
	}
}
