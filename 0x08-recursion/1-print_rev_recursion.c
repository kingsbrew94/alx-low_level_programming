#include "main.h"

/**
  * _print_rev_recursion - Print a string in reverse
  * @s: Holds the string to be reverse
  *
  * Return: Void.
  */
void _print_rev_recursion(char *s)
{
if (!(*s == '\0'))
{
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
}

