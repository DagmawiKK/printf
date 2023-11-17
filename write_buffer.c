#include "main.h"

/**
 * write_buffer - Writes the buffer to the standard output
 * @buffer: The buffer containing characters to be written
 * @size: The size of the buffer
 *
 * Return: The number of characters written
 */
int write_buffer(const char *buffer, int size)
{
	int count = write(1, buffer, size);
	return (count);
}
