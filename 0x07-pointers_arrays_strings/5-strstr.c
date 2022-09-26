#include "main.h"

/**
  * _strstr - Finds the first occurrence of the
  * substring needle in the string @haystack
  * @haystack: the string to search
  * @needle: the string to find
  *
  * Return: A pointer to the beginning of the located substring
  */
char *_strstr(char *haystack, char *needle)
{
int a = 0, b = 0;
while (haystack[a])
{
while (needle[b])
{
if (haystack[a + b] != needle[b])
{
break;
}
b++;
}
if (needle[b] == '\0')
{
return (haystack + a);
}
a++;
}
return ('\0');
}

