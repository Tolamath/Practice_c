#include <stdio.h>
/**
 * factorial - computes the factorial of a number
 *
 *
 * return: factorial
 */
int factorial(int n)
{
	int val = 1;

	while (n != 0)
	{
		val *= n;
		n--;
	}

	return val;
}
/**
 * main - prints the factorial using while loop
 *
 *
 * Return: 0 Always(success)
 */
int main(void)
{
	int m, n;

	printf("Input a number:\n");
	scanf("%d", &n);
	m = factorial(n);
	printf("The factorial of %d is: %d\n", n, m);

	return (0);
}
