#include "main.h"

/**
 * print_pointer - Prints a pointer address to the standard output
 * @ptr: The pointer to print
 *
 * Return: The number of characters printed
 */
int print_pointer(void *ptr)
{
		intptr_t address = (intptr_t)ptr;
		int count = 0;
		count += put_string("0x");
		count += print_number(address, 16, 'x');
		return (count);
}
