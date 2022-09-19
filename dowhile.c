#include <stdio.h>
/**
 * main - use the do while loop to print the ascii numbers alphabet related
 *
 * Return: 0 Always(success)
 */
int main(void)
{
	int i;

	i = 97;
	do {
		printf("\nThe alphabetic relation to the number %d is %c\n", i, i);
	i++;
	} while (i <= 122);


	return (0);
}
