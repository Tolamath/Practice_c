#include <stdio.h>
/**
 * factorial - computes factorial using recursion
 * n - represents the number
 *
 *
 * return : result
 */
int factorial(int n)
{
	int val = 1;

	if (n != 0)
	{
		val = n * factorial(n - 1);
	}

	return val;
}
/**
 * main - entry point
 * 
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	int m, n;

	printf("Enter the value of n:\n");
	scanf("%d", &n);
	m = factorial(n);
	printf("The factorial of %d is: %d\n", n, m);

	return (0);
}
