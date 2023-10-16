#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>


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
int printf_HEX_ext(unsigned int run);
int print_exc_str(va_list val);




#endif
