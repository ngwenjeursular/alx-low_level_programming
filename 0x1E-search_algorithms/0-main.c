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
		10, 1, 42, 3, 4, 42, 6, 7, -1, 9
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	/* Perform linear search on the array */
	printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
	printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
	printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));

	return (EXIT_SUCCESS);
}
