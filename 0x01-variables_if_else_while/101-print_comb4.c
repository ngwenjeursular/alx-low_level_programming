#include <stdio.h>

/**
 * main - Entry point
 * Prints all possible combinations of three digits
 * Return: 0 (Success)
 */
int main(void)
{
	int digit1, digit2, digit3;
	int combinations = 0;

	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 <= 9; digit3++)
			{
				if (combinations > 0)
				{
					putchar(',');
					putchar(' ');
				}

				putchar(digit1 + '0');
				putchar(digit2 + '0');
				putchar(digit3 + '0');

				combinations++;
			}
		}
	}

	putchar('\n');

	return (0);
}
