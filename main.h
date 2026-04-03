#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* for va_list, va_start, va_arg, va_end */
#include <unistd.h> /* for write */

/* main function */
int _printf(const char *format, ...);

/* handler dispatcher */
int handle_format(char c, va_list args);

/* specific format handlers */
int print_char(va_list args);
int print_string(va_list args);

/* integer handlers*/
int print_int(va_list args);

#endif /* MAIN_H */
