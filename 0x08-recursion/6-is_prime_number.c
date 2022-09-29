#include "main.h"

/**
 * is_prime_number - prints prime number.
 *
 * @n: param
 * @i: divisor
 *
 * Return: the value
 */

int prime_number(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_number(n, 2));
}

/**
 * prime_number - return prime
 *
 * @n: number
 * @i: divisor
 *
 * Return: the value
 */

int prime_number(int n, int i)
{
	if (i <= n && (n % i) == 0 && i != n)
		return (0);
	else if (i == n && (n % i) == 0)
		return (1);
	else
		return (prime_number(n, i + 1));
}
