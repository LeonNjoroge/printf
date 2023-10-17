#include "main.h"

/**
 * printf_hex - Custom printf function to print an unsigned hexadecimal number.
 * @val: Argument list containing the value to be printed
 *
 * Return: Number of characters printed.
 */

int printf_hex(va_list val)
{
  int m, cont = 0, *arr;
  unsigned int num, tmp;

  num = va_arg(val, unsigned int);
  tmp = num;

  for (;num / 16 != 0; cont++)
    {
      num /= 16;
    }
  cont++;
  arr = malloc(cont * sizeof(int));

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
