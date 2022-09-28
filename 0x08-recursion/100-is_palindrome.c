#include "main.h"

int _strlen(char *s);
int check_palindrome(char *s, int len, int i);
int is_palindrome(char *s);

/**
 * _strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int length = 0;
if (*(s + length))
{
length++;
length += _strlen(s + length);
}
return (length);
}

/**
 * check_palindrome - Checks if a string is palindrome or not
 * @s: Holds the string value to be checked
 * @len: Holds the length value of @s.
 * @i: Holds the index of the string to be checked.
 *
 * Return: 1 if a string is a palindrome else 0
 */
int check_palindrome(char *s, int len, int i)
{
if (s[i] == s[len / 2])
return (1);
if (s[i] == s[len - i - 1])
return (check_palindrome(s, len, i + 1));
return (0);
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not
 * @s: Holds the string value to be checked
 *
 * Return: 1 if a string is a palindrome else 0
 */
int is_palindrome(char *s)
{
int i = 0;
int strlen = _strlen(s);
if (!(*s))
return (1);
return (check_palindrome(s, strlen, i));
}
