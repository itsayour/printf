int _printf(const char *format, ...)
{
	int cmp = 0;

	va_list args;
	va_start(args, format);

	if (!format || !format[0])
	{
		return (-1);
	}
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);
				_putchar(c);
				cmp++
			}
			else if (*format == 's')
			{
				char *string = va_arg(args, char *);
				cmp += handle_string(string);
			}
			else if (*format == '%')
			{
				_putchar('%');
				cmp++;
			}
			else
			{
				_putchar('%');
				cmp++;
				if (*format)
				{
					_putchar(*format);
					cmp++;
				}
			}
			format++;
		}
		return (cmp);
	}
}
