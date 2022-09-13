#include <stdio.h>
/**
 * main - test a code
 *
 *
 * Return: 0 Always(success)
 */
int main(void)
{
	int age;

	printf("Please enter your age: ");
	scanf("%d", &age);
	if (age < 100)
	{
		printf("You're pretty young!");
	}
	else if (age == 100)
	{
		printf("You're old!");
	}
	else
	{
		printf("You're really old!");
	}
	printf("\n");

	return (0);
}
