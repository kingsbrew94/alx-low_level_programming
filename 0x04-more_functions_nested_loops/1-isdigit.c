#include "main.h"

/**
  * _isdigit - checks if a character int is a digit
  * @n: The number to be checked
  *
  * Return: 1 if a character is a digit or 0 if not digit
  */
int _isdigit(int n)
{
if (n >= 48 && n <= 57)
{
return (1);
}
return (0);
}

