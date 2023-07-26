#include main.h
/**
 * len_num - function print lenght
 *
 * @number: int  number to print
 * Return: lenght of number
 */

int len_num(int number)
{
	if (number == 0)
	{
		return (0);
	}
	else
	{
		return (1 + len_num(num / 10));
	}
}
