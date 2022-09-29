#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * check prime 0> it check prime number
 *@n : number to check
 *@i: iterator
 *Return: a 1 or 0
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
