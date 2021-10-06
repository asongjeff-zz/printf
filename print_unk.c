#include "main.h"

/**
 * print_unk - prints unknown specifiers
 *
 * @c: character
 * Return: chars_printed
 */

int print_unk(char c)
{
	int chars_printed = 0;

	if (c == '%')
	{
		chars_printed += _putchar('%');
	}
	else
	{
		chars_printed += _putchar('%');
		chars_printed += _putchar(c);
	}
	return (chars_printed);
}
