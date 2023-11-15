#include "main.h"

/**
 * _printf - Formats and prints data to the standard output
 * @format: The format string containing format specifiers
 * Return: Returns the count of characters or bytes written
 */

int _printf(const char *format, ...)
{
	va_list passed_args;
	int i;
	int count = 0;
	char *str;

	va_start(passed_args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				count += put_char(va_arg(passed_args, int));
			else if (format[i] == 's')
				count += put_string(va_arg(passed_args, char*))
			else if (format[i] == '%')
				count += write(1, "%", 1);
			else
			{
				count += write(1, &format[i - 1], 1);
				count += write(1, &format[i], 1);
			}
		}
		else
		{
			count += write(1, &format[i], 1);
		}
	}
	va_end(passed_args);
	return (count);
}
