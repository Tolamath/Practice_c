#include <stdio.h>
/**
 * max -  evaluates the maxium of two numbers
 * num1: first number in the function
 * num2: second number in the function
 *
 * return: result
 */
int max(int num1, int num2)
{
	int result;

	if (num1 > num2)
	{
		result = num1;
	}
	else if (num2 > num1)
	{
		result = num2;
	}

	return result;
}

/**
 * main - entry point
 *
 *
 * Return: 0 Always(success)
 */
int main(void)
{
	int a, b, c;

	printf("Please enter the first value:\n");
	scanf("%d", &a);
	printf("Please enter the second value:\n");
	scanf("%d", &b);
	c = max(a, b);
	printf("The maximum value of the two is: %d\n", c);

	return (0);
}
