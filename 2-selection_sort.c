#include "sort.h"

/**
 * swap - Swap 2 integers in an array.
 * @num1: address of the first integer to swap.
 * @num2: adress of the second integer to swap.
 */
void swap(int *num1, int *num2)
{
	int tmp;

	tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

/**
 * selection_sort - function sort an array of integers in ascending order
 * @array: array of integers.
 * @size: size of the array.
 *
 */
void selection_sort(int *array, size_t size)
{
	int *m;
	size_t a, z;

	if (array == NULL || size < 2)
		return;

	for (a = 0; a < size - 1; a++)
	{
		m = array + a;
		for (z = a + 1; z < size; z++)
			m = (array[z] < *m) ? (array + z) : m;

		if ((array + a) != m)
		{
			swap(array + a, m);
			print_array(array, size);
		}
	}
}
