#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int put_char(char c);
int put_string(char *string);
int print_binary(unsigned int n);
int print_number(unsigned int n, int base, char specifier);

#endif
