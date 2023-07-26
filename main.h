#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int handle_string(char *str);
int _putchar(char c);
int specifier_handler(char c, va_list args);
int _printf(const char *format, ...);
int handle_number(int num);

#endif
