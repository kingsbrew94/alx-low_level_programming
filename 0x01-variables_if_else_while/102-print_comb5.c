#include <stdio.h>


/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int mins;
int secs;
for (mins = 0; mins < 99; mins++)
{
for (secs = mins + 1; secs < 100; secs++)
{
if (mins < 10)
{
putchar('0');
}
putchar(mins + '0');
putchar(' ');
if (secs < 10)
{
putchar('0');
}
putchar(secs + '0');
if (mins < 98)
putchar(',');

}
}
putchar('\n');
return (0);
}
