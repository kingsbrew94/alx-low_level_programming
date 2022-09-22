#include "main.h"

/**
  * _strcmp - Compares two strings
  * @s1: Holds the first string
  * @s2: Holds the second string
  *
  * Return: int value
  */
int _strcmp(char *s1, char *s2)
{
int x = 0, y = 0, z = 0, r = 0, lim;
while (s1[x])
{
x++;
}
while (s2[y])
{
y++;
}
if (x <= y)
{
lim = x;
}
else
{
lim = y;
}
while (z <= lim)
{
if (s1[z] == s2[z])
{
z++;
continue;
}
else
{
r = s1[z] - s2[z];
break;
}
z++;
}
return (r);
}
