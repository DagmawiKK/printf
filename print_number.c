#include "main.h"

/**
 * print_number - Prints a number to the standard output
 * @n: The number to print
 *
 * Return: The number of characters printed
 */
int print_number(int n)
{
    unsigned int num;
    int count = 0;

    if (n < 0)
    {
        count += put_char('-');
        num = -n;
    }
    else
    {
        num = n;
    }

    if (num / 10 != 0)
    {
        count += print_number(num / 10);
    }

    count += put_char((num % 10) + '0');
    return (count);
}
