#inlcude <stdio.h>

/**
 * main -> this is a fucntion to print its name 
 * @argc: argc parameter
 * @argv: an array of the command listed
 * Return : 0 for success
 */
int main (int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
}
