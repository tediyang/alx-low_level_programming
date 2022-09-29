#include "main.h"

/**
 * _sqrt_recursion - prints the square root of a number using recursion
 *
 * @n: param
 *
 * Return: the square root
 */

int check_num(int, int);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (check_num(n, 2));
}

/**
 * check_num - returns the square root of a number.
 *
 * @n: param
 * @b: param
 *
 * Return: the square root.
 */

int check_num(int n, int b)
{
	if (n == b)
		return (-1);
	else if (b % (n / b) == 0)
	{
		if (b * (n / b) == n)
			return (b);
		else
			return (-1);
	}
	return (check_num(n, b + 1));
}
