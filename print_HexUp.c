#include "main.h"

/**
 * printf_Hex - print hexadecimal
 * @n: number to be converted
 *
 * Return: counter number of bytes
 */
int print_Hex(unsigned int n)
{
    int count = 0;
    int hex[16];
    int i = 0;

    if (n == 0)
    {
        count += _putchar('0');
    }
    else
    {
        while (n > 0)
        {
            hex[i] = n % 16;
            n /= 16;
            i++;
        }

        for (i = i - 1; i >= 0; i--)
        {
            if (hex[i] > 9)
            {
                count += _putchar(hex[i] + 55);
            }
            else
            {
                count += _putchar(hex[i] + '0');
            }
        }
    }

    return count;
}
