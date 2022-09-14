#include "main.h"
/**
* main - entry point of the code
*
* description - a short one 
* Return: Always 0.
*/
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = (-1 * (n % 10));
		_putchar (lastdigit + '0');
		return (lastdigit);
	}

	else
	{
		lastdigit = (n % 10);
		_putchar (last_digit + '0');
		return (last_digit);
	}
}
