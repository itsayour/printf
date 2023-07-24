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
		}
		return (cmp);
	}
}
