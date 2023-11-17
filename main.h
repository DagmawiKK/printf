#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
int put_char(char c);
int put_string(char *string);
int print_binary(unsigned int n);
int print_number(unsigned int n, int base, char specifier);
int write_buffer(const char *buffer, int size);
int _print_string(const char *str);
int print_pointer(void *ptr);

#endif
