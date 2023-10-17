#include "main.h"

/**
 * printf_bin - this function prints a binary digit.
 * @val: arguments.
 * Return: .
 */
int printf_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int m, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (m = 0; m < 32; m++)
	{
		p = ((a << (31 - m)) & num);
		if (p >> (31 - m))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
