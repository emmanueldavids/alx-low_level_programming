#include "main.h"
int is_divisible(int num, int div);

/**
 * is_prime_number - Afunction that checks if a number is prime.
 * @n: an input integer
 * Return: 1 if n is prime or  0 in otherwise
 */
int is_prime_number(int n)
{
int div = 2;

if (n <= 1)
return (0);

if (n <= 3)
return (1);

return (is_divisible(n, div));
}

/**
 * is_divisible - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 *
 * Return: If the number is divisible - 0.
 * If the number is not divisible - 1.
 */

int is_divisible(int num, int div)
{
if (num % div == 0)
return (0);

if (div == num / 2)
return (1);
return (is_divisible(num, div + 1));
}
