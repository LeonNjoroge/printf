#include "main.h"
/**
 * _printf - this is a function that chooses the right function to be printed.
 * @format: it is an identifier that is used to search.
 * Return: the length and number of characters in the string.
 */
int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", _printfstring}, {"%c", _printfchar},
		{"%%", _printf37},
		{"%i", _printfint}, {"%d", _printfdec}, {"%r", _printfsrev},
		{"%R", _printfrot13}, {"%b", _printfbin}, {"%u", _printfunsigned},
		{"%o", _printfoct}, {"%x", _printf_hex}, {"%X", _printfHEX},
		{"%S", _printfexclusivestring}, {"%p", _printfpointer}
	};

	va_list args;
	int c = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[c] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[c] && m[j].id[1] == format[c + 1])
			{
				len += m[j].f(args);
				c = c + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[c]);
		len++;
		c++;
	}
	va_end(args);
	return (len);
}
