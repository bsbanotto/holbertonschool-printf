#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

/**
 * print_c - writes the character c to stdout via _putchar
 * @c: The character to print
 *
 * Return: number of characters printed (should be 1)
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_c(va_list c)
{
	unsigned int count = 0;

	if(!c)
		return (0);

	_putchar((char)va_arg(c, int));
	count++;

	return (count);
}

/**
 * print_s - writes the string s to stdout via _putchar
 * @s: The string to print
 *
 * Return: On success, the length of string. 
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_s(va_list s)
{
	unsigned int length;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";

	for (length = 0; str[length]; length++)
	{
		_putchar(str[length]);
	}

	return (length);
}

/**
 * print_di - writes the integer di to stdout
 * @di: The integer to print out
 *
 * Return: integer length count on success.
 * On error, -1 is returned, and errno is set appropriately.
 */
 
int print_di(va_list di)
{
	unsigned int count = 0;
	int val = va_arg(di, int), divider = 1;

	if (val < 0)
	{
		_putchar('-');
		val = -val;
		count++;
	}

	while ((val/divider) >= 10)
	{
		divider *= 10;
	}

	while (divider >= 1)
	{
		_putchar((val/divider) + '0');
		val = val % divider;
		divider /= 10;
		count++;
	}

	return (count);
}

