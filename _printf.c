#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * get_print_func - Takes format and returns pointer
 * @format: Format passed from struct
 *
 * Return: function pointer
 */

int (*get_print_func(const char *format))(va_list)

{
	unsigned int i, j;
	printformat format_type[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_di},
		{"i", print_di},
		{NULL, NULL}
	};

	for (i = 0; format_type[i].spec != NULL; i++)
	{
		if (*(format_type[i].spec == *format))
		{
			break;
		}
	}
	return (format_type[i].spec);
}

/**
 * _printf - emulation of standard printf function
 * @format: Data type specifier to be printed
 *
 * Return: Count of characters printed to standard output
 */

int _printf(const char *format, ...)
{
	unsigned int i, count;
	va_list ap;
	int (*func)(va_list);

	if (format == NULL)
		return (-1);

	va_start(ap, format);
