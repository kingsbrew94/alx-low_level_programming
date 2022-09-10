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
int hunds;
for (ones = 0; ones < 8; ones++)
{
for (tens = ones + 1; tens < 9; tens++)
{
for (hunds = tens + 1; hunds < 10; hunds++)
{
putchar(ones + '0');
putchar(tens + '0');
putchar(hunds + '0');
if (ones < 7)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
