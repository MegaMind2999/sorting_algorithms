#include "sort.h"
/**
 *bubble_sort - Sort a set of integers in ascending order
 *
 *@array: An array of ints
 *@size: The size of array
 *Return: Nothing.
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t a, z;

	if (array == NULL || size == 0)
		return;

	a = 0;
	while (a < size)
	{
		for (z = 0; z < size - 1; z++)
		{
			if (array[z] > array[z + 1])
			{
				temp = array[z];
				array[z] = array[z + 1];
				array[z + 1] = temp;
				print_array(array, size);
			}
		}
		a++;
	}
}

