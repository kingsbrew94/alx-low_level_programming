#include "main.h"

/**
 * _isalpha - checks if character is an alphabet
 * @c: The character code to check
 *
 * Return: 1 if charcter is lower else 0.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
