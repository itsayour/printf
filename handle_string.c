#include "main.h"
/**
 * handle_string - counting number of character in a string
 * @str: string
 * Return: count of the characters
 */

int handle_string(char *str)
{
	int count = 0;

	if (str == NULL)
	{
		handle_string("(null)");
		count += 6;
		return (count);
	}

	while (str[count])
	{
		_putchar(str[count]);
		count++;
	}
	return (count);
}
