#include <stdio.h>


/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int m;
int s;
for (m = 0; m < 99; m++)
{
for (s = m + 1; s < 100; s++)
{
if (m < 10)
{
putchar(0 + '0');
}
putchar((m % 10) + '0');
putchar(' ');
if (s < 10)
{
putchar(0 + '0');
}
putchar((s % 10) + '0');
if (m < 98)
{
putchar(',');
putchar(' ');
}
}

}
putchar('\n');
return (0);
}
