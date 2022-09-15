#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long fib1 = 0, fib2 = 1, fibsum = 0;
float tot_sum;
while (fibsum < 4000000)
{
fibsum = fib1 + fib2;
if ((fibsum % 2) == 0)
tot_sum += fibsum;
fib1 = fib2;
fib2 = fibsum;
}
printf("%.0f\n", tot_sum);
return (0);
}