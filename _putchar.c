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
if (c == '\0')
{
return (-1);
}
return (write(1, &c, 1));
}
/**
 * _print_putchar - print iteration of putchar
 * @f: the char to count
 * Return: number of iterations
 */
int _print_putchar(char f)
{
_putchar(f);
return (1);
}
