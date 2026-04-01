#include "main.h"

/**
 * print_char - prints a character
 * @args: list of arguments
 *
 * Return: number of characters printed (always 1)
 */
int print_char(va_list args)
{
	char c;

	/* retrieve next argument as int (char is promoted to int) */
	c = va_arg(args, int);

	/* print the character */
	return (write(1, &c, 1));
}
