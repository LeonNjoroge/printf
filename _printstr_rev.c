#include "main.h"


int printstr_rev(va_list args)
{
  char *c = va_arg(args, char*);
  int m, n = 0;

  if (c == NULL)
    s = "(null)";

  while(c[n] != '\0')
    n++;

  for (m = n - 1; m >= 0; m--)
    _putchar(c[m]);

  return (n);


}
