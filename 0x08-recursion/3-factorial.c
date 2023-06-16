#include "main.h"

/**
 * factorial - returns the factorial of a n
 * @n: number to get factorial from
 *
 * Return: factorial  n
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
