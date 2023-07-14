#include <stdio.h>

/**
 * main - entry point
 * all single-digit numbers from base 10 using putchar
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);

	putchar('\n');
	return (0);
}
