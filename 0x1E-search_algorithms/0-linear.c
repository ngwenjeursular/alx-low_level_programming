#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 *                 of integers using linear search.
 * @array: pointer to the first element of the array to search.
 * @size: number of elements in the array.
 * @value: value to search for.
 *
 * Return: If value is not present or the array is NULL, -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate over each element of the array */
	for (i = 0; i < size; i++)
	{
		/* Print the value being checked */
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
