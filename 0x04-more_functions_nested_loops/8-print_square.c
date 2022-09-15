#include "main.h"

/**
  * print_square - Prints n squares according n number of times
  * @numOfSq: The number of squares/number of times
  */
void print_square(int numOfSq)
{
int i;
int j;
if (numOfSq <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < numOfSq; i++)
{
for (j = 0; j < numOfSq; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
