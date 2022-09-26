#include "main.h"

/**
  * _strspn - Gets the length of a prefix substring
  * @s: source string
  * @accept: accepted string
  *
  * Return: The number of bytes in the initial segment of s
  * which consist only of bytes from accept
  */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j, t = 0;
while (accept[i])
{
j = 0;
while (s[j] != 32)
{
if (accept[i] == s[j])
{
t++;
}
j++;
}
i++;
}
return (t);
}

