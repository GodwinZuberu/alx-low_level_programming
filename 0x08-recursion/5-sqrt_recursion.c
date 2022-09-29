#include "main.h"
/**
 *helperfunction - checks if sqrt of number exists
 *@num: number
 *pSqrt: possible sqrt of numbers
 *
 * *Return sqrt or -1 for error
 */
int helperfunction(int num, int pSqrt)
{
	if ((num * pSqrt) == num)
	{
		return (pSqrt);
	}
	else 
	{
		if (( pSqrt * pSqrt ) > num)
			return (-1);
		else 
			return (helperfunction(num, pSqrt + 1));
	}
}

/**
 *_sqrt function - returns the natural number 
 *@n: number 
 *Return squareroot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return(helperfunction(n, 0));
}
