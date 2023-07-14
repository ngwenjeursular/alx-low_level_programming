#include <stdio.h>

/**
 * main - entry point
 * prints the lowercase alphabet in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);

	putchar('\n');
	return (0);
}
