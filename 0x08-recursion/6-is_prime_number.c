#include "main.h"

int check_prime(int, int);
/**
 *is_prime_number -> prime identifier
 *
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check prime 0> it check prime number
 *@n : number to check
 *@i: iterator
 *Return: a 1 or 0
 */
int check_prime(int n, int i)
{
	if (n <= l)
		return (0);
	if (n % i == 0 && i > l)
		return (0);
	if ((n / i) < i)
		return (l);
	return (check_prime(n, i + l));
}
