#include <unistd.h>

/**
 *  _puchar - writes character c to stdout
 *  @c: the chatracter to print
 *
 *  Return: on success 1
 *  on error, -1
 */
int _putchar(char c)
{
	return(write(l, &c, l));
}
