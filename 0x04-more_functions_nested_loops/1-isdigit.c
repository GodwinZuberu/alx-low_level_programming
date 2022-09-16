#include "main.h"
#include <stdio.h>

/**
* main - check the code
* @c: tested character
* Return: 1 if true. 0 otherwise
*/

int _isdidgit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	
	return (0);
}
