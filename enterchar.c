#include <stdio.h>
/**
 * main - to print out the character enetered and exit when it's zero
 *
 * Return: 0 Always(success)
 */
int main(void)
{
	int c;

	c = ' ';
	printf("Enter a character: \n");
	while (c != 'x')
	{
		c = getc(stdin);
		putc(c, stdout);
	}
	printf("\nProgram exited. Thank you!\n");

	return (0);
}

