#include "main.h"
#include <stdio.h>

/**
  * print_number - Prints an integer.
  * @num: The integer number input.
  */
void print_number(int num)
{
unsigned int k = num;
if (num < 0)
{
num *= -1;
k = num;
_putchar('-');
}
k /= 10;
if (k != 0)
print_number(k);
_putchar((unsigned int) num % 10 + '0');
}
