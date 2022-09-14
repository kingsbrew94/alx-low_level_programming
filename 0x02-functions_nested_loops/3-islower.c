#include "main.h"

/**
 * _islower - checks if character is a lower case
 * @c: The character code to check
 *
 * Return: 1 if charcter is lower else 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
