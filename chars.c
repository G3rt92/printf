#include "main.h"
/**
 * spec_s - specifier for strings
 *@vls: va_list
 * Return: int
 **/
int spec_s(va_list vls)
{
	char *s;

	s = va_arg(vls, char *);
	while (*s != '\0')
		_putchar(*s++);
	if (s == NULL)
		s = "(null)";
	return (0);
}
/**
 * spec_c - specificer for character
 * @vls: valist
 * Return: int
 **/
int spec_c(va_list vls)
{
	char s;

	s = va_arg(vls, int);
	_putchar(s);
	return (1);
}
