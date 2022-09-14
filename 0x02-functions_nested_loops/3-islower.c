#include "main.h"
/**
* main - entry point of the code
*
* Return: Always 0
*/
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
