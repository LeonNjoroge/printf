#include "main.h"

/**
 * printstr_rev - Custom printf function to print a string in reverse.
 * @args: Argument list containing the string to be printed in reverse.
 *
 * Return: Number of characters printed.
 */

int printstr_rev(va_list args)
{
char *c = va_arg(args, char*);
int m, n = 0;

if (c == NULL)
c = "(null)";

while (c[n] != '\0')
n++;

for (m = n - 1; m >= 0; m--)
_putchar(c[m]);

return (n);

}
