#include <stdio.h>

/**
 * main - entry point
 * prints the alphabet in lowercase then uppercase
 * Return: 0 (Success)
 */
int main(void)
{
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);

	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);

	putchar('\n');
	return (0);
}
