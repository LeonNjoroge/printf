#include "main.h"



int print_exc_str(va_list val)
{
  int m, size, arg;
  char *c;
  
  size = 0;

  c = va_arg(val, char *);
  if (c == NULL)
    c = "(null)";

  m = 0;

  for (; c[m] != '\0'; m++)
    {
      if (c[m] < 32 || c[m] >= 127)
	{
	  _putchar('\\');
	  _putchar('x');
	  size = size + 2;
	  arg = c[m];

	  if (arg < 16)
	    {
	      _putchar('0');
	      size++;
	    }
	  size = size + print_HEX_ext(arg);
	}
      else
	{
	  _putchar(c[m]);
	  size++;
	}

    }
  return (size);

}
