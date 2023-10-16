#include "main.h"


int printf_HEX_ext(unsigned int num)
{
  int m, cont = 0, *arr;
  unsigned int tmp;

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
        arr[m] = arr[m] + 7;
      _putchar(arr[m] + '0');
    }

  free(arr);
  return (cont);
}
