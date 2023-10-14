#include "main.h"


/**
 * print_upper_hex - Prints an unsigned integer as uppercase hexadecimal
 * @value: A va_list containing the unsigned integer to print
 *
 * Return: The number of characters printed
 */

int print_upper_hex(va_list value)
{
  int a = 0, cont = 0, *arr;
  unsigned int val, temp;

  val = va_arg(value, unsigned int);
  temp = val;

  for (; val/16 != 0; cont++)
    num /= 16;

  cont++;
  arr  = malloc(cont * sizeof(int));

  while (a < cont)
    {
      arr[a] = temp % 16;
      temp /= 16;
      a++;
    }

  a = cont - 1;
  
  while (a >= 0)
    {
      if(arr[a] > 9)
	arr[a] = arr[a] + 7;
      _putchar(arr[a] + '0');
      a--;
    }
  free(arr);
  return (cont);

}
