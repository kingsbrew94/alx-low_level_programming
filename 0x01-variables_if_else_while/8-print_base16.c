#include <stdio.h>


/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char bs16;
for (bs16 = '0'; bs16 <= '9'; bs16++)
putchar(bs16);
for (bs16 = 'a'; bs16 <= 'f'; bs16++)
putchar(bs16);
putchar('\n');
return (0);
}
