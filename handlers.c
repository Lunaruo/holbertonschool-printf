#include "main.h"

/**
 * handle_format - handles format specifiers
 * @c: specifier character (c, s, %)
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int handle_format(char c, va_list args)
{
	int count;

	count = 0;

	/* check which specifier was found */
	if (c == 'c')
	{
		/* print a single character */
		count += print_char(args);
	}
	else if (c == 's')
	{
		/* print a string */
		count += print_string(args);
	}
	else if (c == '%')
	{
		/* print a literal '%' */
		count += write(1, "%", 1);
	}

	/* return how many characters were printed */
	return (count);
}
