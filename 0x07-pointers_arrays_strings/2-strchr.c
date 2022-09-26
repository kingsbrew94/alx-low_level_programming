#include "main.h"

/**
  * _strchr - Locates a character in a string
  * @s: source string value
  * @c: character to find
  *
  * Return: A pointer to the first occurrence of the character
  * c in the string s, or NULL if the character is not found
  */
char *_strchr(char *s, char c)
{
int i = 0, j;
while (s[i])
{
i++;
}
for (j = 0; j <= i; j++)
{
if (c == s[j])
{
s += j;
return (s);
}
}
return ('\0');
}

