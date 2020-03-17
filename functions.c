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
 * print_number - write a function that integers
 * @n: this is an integer
 */
void print_number(int n)
{
	unsigned int l;

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
	_putchar(l % 10 + '0');
}

/**
 * printhexa - print hexadecimal characters
 * Return: Integer (Success)
 */
int printhexa(void)
{
	char a, b;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}

/**
 * porcent - search for case after %
 * @format: string to be evaluated
 * @h: number of iterations
 * @arg: argument from the list
 * Return: Always 0 (Success)
 */
void porcent(const char *format, int h, va_list arg)
{
	int i;
	char *s;

	switch (format[h])
	{
		case 'c':  /*this prints a single char*/
			_putchar((char) va_arg(arg, int));
			break;
		case 's': /*this prints a string*/
			s = va_arg(arg, char *);
			print_str(s);
			break;
		case '%':
			_putchar('%');
			break;
		case 'd':
			i = va_arg(arg, int);
			print_number(i);
			break;
		case 'i':
			i = va_arg(arg, int);
			print_number(i);
			break;
	}
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
