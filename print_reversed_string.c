#include "main.h"

/**
* print_reversed_string - Prints the reversed string
* @str: The string to reverse and print
* Return: The number of characters printed
*/


int print_reversed_string(const char *str)
{
    int count = 0;
    int length = 0;
    const char *temp = str;
    int i;

    while (*temp)
    {
        length++;
        temp++;
    }
    for (i = length - 1; i >= 0; i--)
    {
        count += put_char(str[i]);
    }

    return count;
}
