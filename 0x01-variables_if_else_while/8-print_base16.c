#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all numbers at  base 16 in lower case
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);

		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
