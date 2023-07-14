#include <stdio.h>

/**
 * main - entry point
 * prints all the numbers of base 16 in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int hexd;

	int hexl;

	for (hexd = 48; hexd <= 57; hexd++)
		putchar(hexd);


	for (hexl = 97; hexl <= 102; hexl++)
		putchar(hexl);

	putchar('\n');
	return (0);
}
