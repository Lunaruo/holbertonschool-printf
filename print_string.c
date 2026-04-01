#include "main.h"

/**
 * print_string - prints a string
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_string(va_list args)
{
	char *str;
	int i;

	/* get the string argument */
	str = va_arg(args, char *);

	/* handle NULL string */
	if (str == NULL)
		str = "(null)";

	i = 0;

	/* print string character by character */
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}

	/* return length of printed string */
	return (i);
}
