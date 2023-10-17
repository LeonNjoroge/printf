#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - convert the specifiers for printf
 * @id: output char pointer for d, i, u, o, x, X
 * @f: pointer for conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;


int printf_string(val_list val);
int printf_char(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int printf_int(va_list args);
int printf_dec(va_list args);
int printf_bin(va_list val);
int printf_unsigned(va_list args);
int printf_oct(va_list val);
int printf_hex(va_list val);
int printf_HEX(va_list val);
int printf_HEX_ext(unsigned int num);
int print_exc_str(va_list val);
int printf_hex_ext(unsigned long int num);
int printstr_rev(va_list args);
int print_rot13(va_list args);
int print_pointer(va_list val);


#endif
