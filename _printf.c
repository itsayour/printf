#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: string
 * Return:  the number of char printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	int cmp = 0;
	va_list args;

	va_start(args, format);

	if (!format || !format[0])
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			cmp += specifier_handler(*format, args);
			format++;
		}
		else
		{
			cmp += _putchar(*format);
			format++;
		}
	}
	va_end(args);
	return (cmp);
}
