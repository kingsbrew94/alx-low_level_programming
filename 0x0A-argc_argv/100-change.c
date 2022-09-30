#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: arguments size.
 * @argv: arguments.
 *
 * Return: 1 else 0
 */
int main(int argc, char *argv[])
{
int change[5] = {25, 10, 5, 2, 1};
int count = 0;
int i;
int res = 0;
if (argc != 2)
{
printf("Something wrong\n");
return (1);
}
res = atoi(argv[1]);
if (res <= 0)
{
printf("0\n");
return (0);
}
for (i = 0; i < 5; i++)
{
if (res >= change[i])
{
count = count + (res / change[i]);
res = res % change[i];
}
}
printf("%d\n", count);
return (0);
}
