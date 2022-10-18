#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct sptype - struct sptype
 *@
 *@func: function
 **/
typedef struct sptype
{
	char ch;
	int (*func)(va_list vls);
} sptype_t;

int _printf(const char *format, ...);
int _putchar(char c);
int spec_s(va_list vls);
int spec_c(va_list vls);
int spec_prcnt(__attribute__((unused))va_list valist);

#endif
