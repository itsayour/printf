#include "main.h"
/**
 * handle_number - it prints a number
 * @num: number
 * Return: print the number
 */
int handle_number(int num)
{
	if (num == -214783648)
	{
		_putchar('-');
		_putchar('2');
		handle_number(14783648);
		return (1);
	}
	else if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	if (num >= 10)
	{
		handle_number(num / 10);
		handle_number(num % 10);
	}
	else if (num < 10)
	{
		_putchar(num + '0');
	}
	return (1);
}
