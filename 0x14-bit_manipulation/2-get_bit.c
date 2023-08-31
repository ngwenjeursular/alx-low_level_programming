#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to search
 * @index: index , starting from 0
 *
 * Return: value of the bit 0r -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val_of_bit;

	if (index > 63)
		return (-1);

	val_of_bit = (n >> index) & 1;

	return (val_of_bit);
}
