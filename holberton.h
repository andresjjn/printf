#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_number(int n);
int porcent(const char *format, int h, va_list arg);
void back(const char *format, int h);
int print_str(char *s);
int _print_putchar(char n);
#endif
