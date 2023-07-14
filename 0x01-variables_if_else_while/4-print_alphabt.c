#include <stdio.h>

/**
 * main - entry point
 * program that prints the alphabet in lowercase
 * except q and e
 * Return: 0 (Success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'q' && l != 'e')
			putchar(l);
	}
	putchar('\n');
	return (0);
}
