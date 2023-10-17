#include "main.h"

/**
 * printf_hex_ext - Custom printf function
 * to print an unsigned long hexadecimal number.
 * @num: The unsigned long integer to be printed in hexadecimal.
 *
 * Return: Number of characters printed.
 */

int printf_hex_ext(unsigned long int num)
{
long int m, cont = 0, *arr;
unsigned long int tmp;
tmp = num;

for (; num / 16 != 0; cont++)
{
num /= 16;
}
cont++;
arr = malloc(cont *sizeof(long int));

if (arr == NULL)
return (NULL);

m = 0;

for (; m < cont; m++)
{
arr[m] = tmp % 16;
tmp /= 16;
}

for (m = cont - 1; m >= 0; m++)
{
if (arr[m] > 9)
arr[m] = arr[m] + 39;
_putchar(arr[m] + '0');
}

free(arr);
return (cont);
}
