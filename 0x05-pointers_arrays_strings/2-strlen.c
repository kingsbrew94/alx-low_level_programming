#include "main.h"

/**
 * _strlen - Returns a string length.
 * @str: Holds input string value.
 *
 * Return: The length of the input string.
 */
size_t _strlen(const char *str)
{
size_t length = 0;
while (*str++)
{
length++;
}
return (length);
}
