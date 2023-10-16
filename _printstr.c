include "main.h"
/**
 * _strlen - gives the length of a string
 * @str: it is a pointer for strings
 * Return: m
 */

int _strlen(char *str)
{
	int m;
	
	for (m = 0; str[m] ! = 0; m++)
			      ;
		return (m);
}
/**
 * _strlenc - for const char pointer string
 * @str: it is a pointer for characters
 * Return: m
 */
int _strlenc(const char *str)
{
  int m;

	for (m = 0; str[m] ! = 0; m++)
			      ;
		return (m);
}
