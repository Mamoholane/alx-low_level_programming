#include <stdio.h>

/**
*main - prints the name of
*the file it was compiled from
*
*Return: nothing to be returned
*/

int main(void)
{
	print("%s\n", __FILE__);
	return (0);
}
