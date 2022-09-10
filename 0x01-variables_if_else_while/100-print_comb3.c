#include <stdio.h>


/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ones;
int tens;
for (ones = 0; ones < 10; ones++)
{
for (tens = ones + 1; tens < 10; tens++)
{
putchar(ones + '0');
putchar(tens + '0');
if (ones < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
