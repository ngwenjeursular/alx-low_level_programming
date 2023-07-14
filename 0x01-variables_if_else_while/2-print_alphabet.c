#include <stdio.h>

/**
 * main - entry point
 * program prints out the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
