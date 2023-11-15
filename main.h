#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int put_char(int c);
int put_string(char *string);
int formatter(char decorator, va_list passed_args);
int _printf(const char *format, ...);

#endif
