#include "main.h"

/**
  * print_square - Prints n squares according n number of times
  * @num: The number of squares
  */
void print_square(int num)
{
int i;
int j;
if (num <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < num; i++)
{
for (j = 0; j < num; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
