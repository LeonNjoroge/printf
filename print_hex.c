#include "main.h"

/**
 * printf_hex - hexadecimal number in lower case.
 * @n: int
 * Return: number of bytes or  counter.
 */
int printf_hex(va_list val)
{
    int i;
    int counter = 0;
    unsigned int num = va_arg(val, unsigned int);
    unsigned int temp = num;
    char hex_digits[] = "0123456789ABCDEF";

    if (num == 0)
    {
        _putchar('0');
        return 1;
    }

    while (temp > 0)
    {
        temp /= 16;
        counter++;
    }

    for (i = counter - 1; i >= 0; i--)
    {
        _putchar(hex_digits[(num >> (4 * i)) & 0xF]);
    }

    return counter;
}
