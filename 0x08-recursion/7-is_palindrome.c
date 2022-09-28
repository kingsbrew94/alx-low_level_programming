#include "main.h"

int check_palindrome(char *s);

/**
  * is_palindrome - Returns 1 if a string is a palindrome and 0 if not
  * @s: Holds the string value to be checked
  *
  * Return: 1 if a string is a palindrome else 0
  */
int is_palindrome(char *s)
{
if (*s == '0')
return (1);
return (check_palindrome(s));
}

/**
  * check_palindrome - Checks if a string is palindrome or not
  * @s: Holds the string value to be checked
  *
  * Return: 1 if a string is a palindrome else 0
  */
int check_palindrome(char *s)
{
int l = _strlen_recursion(s) - 1;
if (*s == s[l])
{
s++;
l--;
}
else
{
return (0);
}
return (1);
}

/**
  * _strlen_recursion - Gets the length of a string
  * @s: Holds the string to get the length
  *
  * Return: the string length
  */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (_strlen_recursion(s) + 1);
}

