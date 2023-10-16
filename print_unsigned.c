#include "main.h"
/**
 * printf_unsigned - prints an integer d or i
 * @args: argument
 * Return: number of characters
 */
int printf_unsigned(va_list args)
{
	int c = va_arg(args, int);
	int num, last = c % 10, digit, exp = 1;
	int  m = 1;

	c = c / 10;
	num = c;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		c = -c;
		last = -last;
		m++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = c;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			m++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * printf_dec - prints a decimal of any kind
 * @args: it is an argument
 * Return: the no. of characters
 */

int printf_dec(va_list args)
{
	int c = va_arg(args, int);
	int num, last = c % 10, digit;
	int  m = 1;
	int exp = 1;

	c = c / 10;
	num = c;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		c = -c;
		last = -last;
		m++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = c;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			m++;
		}
	}
	_putchar(last + '0');

	return (m);
}
