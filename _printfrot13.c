#include "main.h"


/**
 * print_rot13 - Custom printf function to print a string encoded in ROT13.
 * @args: Argument list containing the string to be printed in ROT13.
 *
 * Return: Number of characters printed.
 */


int print_rot13(va_list args)
{
int m, n, cont = 0, l = 0;

char *c = va_arg(args, char*);
char alp[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
char bet[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

if (c == NULL)
c = "(null)";

m = 0;
for (; c[m]; m++)
{
for (n = 0; alp[n] && !l; n++)

{
if (c[m] == alp[n])
{
_putchar(bet[n]);
cont++;
l = 1;
}
}
if (!l)
{
_putchar(c[m]);
cont++;
}

}
return (cont);
}
