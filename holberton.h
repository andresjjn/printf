#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
int _putchar(char c);
void print_number(int n);
void porcent(const char *format, int h, va_list arg);
void back(const char *format, int h);
int percentage(__attribute__((unused))char *c);
int print_str(char *s);
int printhexa(void);
#endif
