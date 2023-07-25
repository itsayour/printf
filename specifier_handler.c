/**
 *  specifier_handler - helper function
 *  @c: character,
 *  @args: arguments
 *  Return: Count
 */
int specifier_handler(char c, va_list args)
{
	int count = 0;
	
	if (c == 'c')
		count = _putchar(va_arg(args, int));
	else if (c == 's')
	{
		char *str = va_arg(args, char *);
		count += handle_string(str);
	}
	else if (c == '%')
		count = _putchar(c);
	else
	{
		count += _putchar('%');
		count += _putchar(c);
	}
	return (count);
}
