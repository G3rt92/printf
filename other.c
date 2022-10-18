#include "main.h"
/**
 * spec_prcnt - prints a percent
 * @l: va_list arguments from _printf
 * Return: number of char printed
 */
int spec_prcnt(__attribute__((unused))va_list vls)
{
	return (_putchar('%'));
}
