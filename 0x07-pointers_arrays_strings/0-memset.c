#include "main.h"

/**
  * _memset - Fills the first @n bytes of the memory area pointed to by @s
  * with the constant byte @b
  * @s: memory area to fill
  * @b: constant byte to fill
  * @n: bytes of memory area to fill
  *
  * Return: A pointer to the memory area
  */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

