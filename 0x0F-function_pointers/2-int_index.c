#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: Array of integers.
 * @size: The size of the @array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: If no element matches -1.
 * Otherwise - The index of the first element compared
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int index;
for (index = 0; (index < size) && (cmp != NULL) && (array != NULL); index++)
{
if (cmp(array[index]) != 0)
return (index);
}
return (-1);
}
