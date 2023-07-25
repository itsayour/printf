/**
 * _putchar - writes the character c
 * @c: The character to print
 * Return: void
 */

int _putchar(char c)
{
   return(write(1, &c, 1));
}
