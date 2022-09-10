#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char l = 'z';
while (l >= 'a')
{
putchar(l--);
}
putchar('\n');
return (0);
}
