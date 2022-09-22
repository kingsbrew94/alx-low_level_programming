#include "main.h"

/**
  * _strncpy - Copies a string
  * @dest: Holds the destination value
  * @src: Holds the source value
  * @n: Holds the copy limit
  *
  * Return: destination value
  */
char *_strncpy(char *dest, char *src, int n)
{
int x = 0, y = 0;
while (src[y])
{
y++;
}
while (x < n && src[x])
{
dest[x] = src[x];
x++;
}
while (x < n)
{
dest[x] = '\0';
x++;
}
return (dest);
}

