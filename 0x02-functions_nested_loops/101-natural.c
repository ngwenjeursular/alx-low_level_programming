#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int sum = 0;
	int limit = 1024;
	int i;

	for (i = 0; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
