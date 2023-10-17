#include "main.h"


int print_pointer(va_list val)
{
  void *point;
  char *c = "(nil)";
  long int e;
  int d, m;

  point = va_arg(val, void*);

  if (point == NULL)
    {
      for (m = 0; c[m] != '\0'; m++)
	{
	  _putchar(c[m]);
	}
      return (m);
    }
  e = (unsigned long int)point;
  _putchar('0');
  _putchar('x');
  d = printf_hex_ext(e);
  return (d + 2);
}
