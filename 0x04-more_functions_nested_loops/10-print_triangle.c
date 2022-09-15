#include "main.h"

/**
  * print_triangle - prints a triangle of squares per input parameter
  * @sz: The size of the squares triangle
  */
void print_triangle(int sz)
{
int i;
int j; 
int k;
if (sz <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < sz; i++)
{
for (j = sz - i; j > 1; j--)
{
_putchar(32);
}
for (k = 0; k <= i; k++)
{
_putchar(35);
}
_putchar('\n');
}
}
}