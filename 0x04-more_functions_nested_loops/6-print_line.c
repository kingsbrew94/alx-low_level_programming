#include "main.h"

/**
  * print_line - Draws a straight line according to parameter
  * @n1: The number of lines to draw
  *
  * Return: empty
  */
void print_line(int n1)
{
int i;
if (n1 <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n1; i++)
{
_putchar(95);
}
_putchar('\n');
}
}

