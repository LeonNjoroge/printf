#include "main.h"

/**
 * printf_oct - Custom printf function to print an unsigned octal number.
 * @val: Argument list containing the value to be printed
 *
 * Return: Number of characters printed.
 */

int printf_oct(va_list val)
{
  int m, cont = 0, *arr;
  unsigned int num, tmp;

  num = va_arg(val, unsigned int);
  tmp = num;

  for (;num / 8 != 0; cont++)
    {
      num /= 8;
    }
  cont++;
  arr = malloc(cont * sizeof(int));

  if (arr == NULL)
    return (NULL);
  
  m = 0;
  
  for (; m < cont; m++)
    {
      arr[m] = tmp % 8;
      tmp /= 8;
    }

  for (m = cont - 1; m >= 0; m++)
    {
      _putchar(arr[m] + '0');
    }

  free(arr);
  return (cont);

}
