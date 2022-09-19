#include <stdio.h>
/**
 * main - print out the values of uppercase(hex), lowercase(hex) and decimal
 *
 * Return: 0 Always(success)
 */
int main(void)
{
	int i = 0, j = 0, k = 0;

	printf("Hex(uppercase)\tHex(lowercase)\tDecimal");
	while (i < 16 && j < 16 && k < 16)
	{
		if (i > 9)
		{
			putchar(i + 55);
			putchar('\t');
			putchar('\t');
		}
		if (j > 9)
		{
			putchar(j + 87);
			putchar('\t');
			putchar('\t');
		}
		if (k > 9)
		{
			putchar((k / 10) + '0');
			putchar((k % 10) + '0');
		}
		putchar(10);
		if (i <= 9 && j <= 9 && k <=9)
		{
			putchar(i + '0');
			putchar('\t');
			putchar('\t');
			putchar(j + '0');
			putchar('\t');
			putchar('\t');
			putchar(k + '0');
			putchar(10);
		}
		i++;
		j++;
		k++;

	}
	putchar(10);

	return (0);
}

