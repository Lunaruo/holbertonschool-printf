#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string containing characters and specifiers
 *
 * Return: total number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, count;      /* i = index, count = total printed chars */
	va_list args;      /* holds the variable arguments */

	/* check if format string is NULL */
	if (format == NULL)
		return (-1);

	/* initialize args to retrieve arguments after format */
	va_start(args, format);

	i = 0;
	count = 0;

	/* loop through each character in format string */
	while (format[i])
	{
		/* if not a format specifier, print normally */
		if (format[i] != '%')
		{
			count += write(1, &format[i], 1);
		}
		else
		{
			/* skip '%' and check next character */
			i++;

			/* send specifier to handler function */
			count += handle_format(format[i], args);
		}
		i++; /* move to next character */
	}

	/* clean up variadic arguments */
	va_end(args);

	/* return total printed characters */
	return (count);
}
