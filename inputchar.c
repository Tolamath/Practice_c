#include <stdio.h>
/**
 * main - Reading input calling getc()
 *
 *
 * Return: 0 Always(success)
 */
int main(void)
{
	int x;

	x = 2;
	printf("The numerical value of the character  entered is :");
	putc(x, stdout);
	putc('\n', stdout);

	return (0);
}

