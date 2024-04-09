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
		0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 54, 61, 62, 76, 99
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	/* Perform exponential search on the array */
	printf("Found %d at index: %d\n\n", 62, exponential_search(array, size, 62));
	printf("Found %d at index: %d\n\n", 3, exponential_search(array, size, 3));
	printf("Found %d at index: %d\n", 999, exponential_search(array, size, 999));

	return (EXIT_SUCCESS);
}
