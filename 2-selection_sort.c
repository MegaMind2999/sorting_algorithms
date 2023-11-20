#include "sort.h"

/**
 * swp - Swaping two ints in an array.
 * @i: The first integer to swap.
 * @j: The second integer to swap.
 */
void swp(int *i, int *j)
{
	int temp;

	temp = *j;
	*j = *i;
	*i = temp;
}

/**
 * selection_sort - Sort an array using the selection sort.
 * @array: An array of integers.
 * @size: The size of the array.
 * return: Void.
 */
void selection_sort(int *array, size_t size)
{
	int *m;
	size_t i, j;

	if (array == NULL || size <= 1)
		return;

	i = 0;
	while (i < size - 1)
	{
		m = array + i;
		for (j = i + 1; j < size; j++)
			if (array[j] < *m)
				m = (array + j);

		if ((array + i) != m)
		{
			swp(array + i, m);
			print_array(array, size);
		}
		i++;
	}
}
