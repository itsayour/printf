#include "main.h"
/**
 * _putchar - writes the character c
 * @c: The character to print
 * Return: 1 Success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
