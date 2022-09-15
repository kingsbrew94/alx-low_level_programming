#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints up to 98 natural number
 * @n: The initial number
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
