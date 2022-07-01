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
	unsigned int i;
	format_type print_class[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_di},
		{"i", print_di},
		{NULL, NULL}
	};

	for (i = 0; print_class[i].spec != NULL; i++)
	{
		if (*(print_class[i].spec) == *format)
		{
			break;
		}
	}
	return (print_class[i].f);
}

/**
 * _printf - emulation of standard printf function
 * @format: Data type specifier to be printed
 *
 * Return: Count of characters printed to standard output
 */

int _printf(const char *format, ...)
{
	unsigned int i, count = 0;
	va_list ap;
	int (*func)(va_list);

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	i = 0;
	while (format[i])
	{
		for (i = i; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		func = get_print_func(&format[i + 1]);
		if (func != NULL)
		{
			count += func(ap);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;

		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(ap);
	return (count);
}
