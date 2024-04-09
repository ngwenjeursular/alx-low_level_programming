#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point for the program
 *
 * Return: Always returns EXIT_SUCCESS
 */
int main(void)
{
	/* Initialize array and size */
	int array[] = {
		0, 1, 2, 5, 5, 6, 6, 7, 8, 9
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	/* Perform advanced binary search on the array */
	printf("Found %d at index: %d\n\n", 8, advanced_binary(array, size, 8));
	printf("Found %d at index: %d\n\n", 5, advanced_binary(array, size, 5));
	printf("Found %d at index: %d\n", 999, advanced_binary(array, size, 999));

	return (EXIT_SUCCESS);
}
