#include <stdio.h>

/**
 * main - entry point
 * prints all single-digit numbers starting from 0
 * of base 10
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	printf("\n");

	return (0);
}
