#include <stdio.h>

/**
 * main - entry point
 * prints all possible different combinations of two digits.
 * Return: 0 (Success)
 */
int main(void)
{
	int digit1, digit2;

	digit1 = '0';
	digit2 = '0';

	while (digit1 <= '9')
	{
		while (digit2 <= '9')
		{
			if (digit1 < digit2)
			{
				putchar(digit1);
				putchar(digit2);
				if (digit1 != '0' || (digit1 == '0' && digit2 != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			digit2++;
		}
		digit1++;
		digit2 = '0';
	}
	putchar('\n');
	return (0);
}
