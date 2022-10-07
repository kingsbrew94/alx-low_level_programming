#include "main.h"
#include <stdlib.h>

/**
  * array_range - It creates an array of integers
  * @min: Holds the maximum count of integers
  * @max: Holds the minimum count of integers
  *
  * Return: Integer pointer
  */
int *array_range(int min, int max)
{
int *a, i = 0;
if (min > max)
return (NULL);
a = malloc((sizeof(int) * (max - min)) + sizeof(int));
if (a == NULL)
return (NULL);
while (min <= max)
{
a[i] = min;
i++;
min++;
}
return (a);
}
