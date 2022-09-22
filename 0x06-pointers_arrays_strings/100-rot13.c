#include "main.h"
#include <stdio.h>

/**
  * rot13 - Encodes a string using
  * @s: Holds characters to be encoded
  *
  * Return: A Collection of Encoded Characters
  */
char *rot13(char *s)
{
int i = 0;
while (s[i])
{
while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
{
if ((s[i] > 'm' && s[i] <= 'z') || (s[i] > 'M' && s[i] <= 'Z'))
{
s[i] -= 13;
break;
}
s[i] += 13;
break;
}
i++;
}
return (s);
}

