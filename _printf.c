#include "main.h"
/**
 * _printf - custom implementation of printf function
 * @format: the formart string
 * Return: int
 **/
int _printf(const char *format, ...)
{
	int i, j;

	va_list vls;
	sptype_t fspec[] = {
		{'c', spec_c}, {'s', spec_s}, {'%', spec_prcnt}, {'\0', NULL}};

	if (!format)
		return (-1);

	va_start(vls, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; fspec[j].ch; j++)
			{
				if (format[i] == fspec[j].ch)
				{
					i++;
					fspec[j].func(vls);
					continue;
				}
			}
		}
		_putchar(format[i]);
	}
	va_end(vls);

	return (0);
}
