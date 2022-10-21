#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _printf - custom implementation of printf function
 * @format: the formart string
 * Return: int
 **/
int _printf(const char *format, ...)
{
	int i, j, k;

	va_list vls;
	sptype_t fspec[] = {
		{'c', spec_c}, {'s', spec_s}, {'%', spec_prcnt}, {'\0', NULL}};

	if (!format)
		return (-1);

	va_start(vls, format);
	k = 0;
		for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				break;
			}
			for (j = 0; fspec[j].ch; j++)
			{
				if (format[i] == fspec[j].ch)
				{
					i++;
					k = fspec[j].func(vls);
					continue;
				}
			}
			k = k - 2;
		}
		if (format[i] == '\0')
		{
			break;
		}
		_putchar(format[i]);
	}
	va_end(vls);

	return ((k + i));
}
