#include "main.h"

/**
 * print_pointer - Prints a pointer address to the standard output
 * @ptr: The pointer to print
 *
 * Return: The number of characters printed
 */
int print_pointer(void *ptr)
{
		uintptr_t address = (uintptr_t)ptr;
		int count = 0;
		count += _puts("0x");
		count += print_number(address, 16, 'x');
		return (count);
}
