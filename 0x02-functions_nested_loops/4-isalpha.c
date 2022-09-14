#include "main.h"
/*
* main - entry point
* 
* description : simple code
*
* Return: Always 0.
*/
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	
	else {
		return (0);
	}
}
