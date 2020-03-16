#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printstr - print a string of characters
 * @s: The character to print
 * Return: nothing
 */
void _printstr(char *s)
{
	int i = 0;
	
	if (s == NULL)
		return;	
	for (i = 0; s[i]; i++)
		_putchar(s[i]);
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
 *
 * Return: Always 0 (Success)
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
 *
 * Return: Always 0 (Success)
 */
void porcent(const char * format, int h, va_list arg)
{
    int j, i;
    char *t;
    switch (format[h])
    {
        case 'c':
            _putchar((char) va_arg(arg, int));
        break;
        case 's':
            t = va_arg(arg, char *);
            for (j = 0; t[j] != '\0'; j++)
                _putchar(t[j]);
        break;
        case 'd':
            i = va_arg(arg, int);
            print_number(i);
        break;
        case 'i':
            i = va_arg(arg, int);
            print_number(i);
        break;
        case '%':
            i = va_arg(arg, int);
            print_number(i);
        break;
    }
}

/**
 * back - identify new line
 *
 * Return: Always 0 (Success)
 */
void back(const char * format, int h)
{
    switch (format[h])
    {
        case 'n':
            _putchar('\n');
        break;
    }
}