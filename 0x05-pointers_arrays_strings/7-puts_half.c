#include "main.h"

/**
 * puts_half - Prints the second half of the string.
 * @str: The variable containing the input string.
 */
void puts_half(char *str)
{
int index = 0, len = 0, n;
while (str[index++])
{	
len++;
}
if ((len % 2) == 0)
{
n = len / 2;
}
else
{
n = (len + 1) / 2;
}
for (index = n; index < len; index++)
{
_putchar(str[index]);
}
_putchar('\n');
}
