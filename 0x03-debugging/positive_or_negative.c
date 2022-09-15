#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - prints results whether an input is positive or negative
 * @n: The input that is checked
 */
void positive_or_negative(int n)
{
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
}
