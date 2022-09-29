#include "main.h"
/**
 *find_sqrt - Finds the natural square root of an inputted number.
 *@num: The number to find the square root of
 *@root: The root to be tested
 *
 *Return: If the number has a natural square root - the square root.
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
