#include "main.h"

/**
 * print_sign - checks if character is an alphabet
 * @s: The number which determines the sign to be printed
 *
 * Return: 1 if greater than 0 print +
 * 0 if equals 0 print 0
 * -1 else print -
 */
int print_sign(int s)
{
if (s > 0)
{
_putchar('+');
return (1);
}
else if (s == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
return (0);
}
