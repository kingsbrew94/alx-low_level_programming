#include "main.h"
#include <stdio.h>
/**
 * _atoi - gets sign and numbers of string
 * @s: array
 * Return: gets numbers with its sign
 */
int _atoi(char *s)
{
unsigned int cont1 = 0, i, j, k, num = 0, tam;
int aux2 = 1;
while (*(s + cont1) != '\0')
{
cont1++;
}
for (i = 0; i < cont1; i++)
{
if (*(s + i) >= '0' && *(s + i) <= '9')
break;
}
for (j = i; j < cont1; j++)
{
if (!(*(s + j) >= '0' && *(s + j) <= '9'))
break;
}
for (k = 0; k < i; k++)
{
if (*(s + k) == '-')
aux2 = aux2 * (-1);
}
tam = j - i;
while (tam >= 1)
{
num = (num * 10) + (*(s + i) - '0');
i++;
tam--;
}
num = num * aux2;
return (num);
}
