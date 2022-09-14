#include "main.h"
/*
* main: entry
*
* description - code details here 
* Return : 0
*/
int print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
