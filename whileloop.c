#include <stdio.h>
/**
 * main - test a while loop
 *
 *
 * Return: 0 Always(success)
 */
int main(void)
{
	int a = 10;

	while (a < 20)
	{
		printf("The value of a is now: %d\n", a);
		a++;
	}

	return (0);
}
