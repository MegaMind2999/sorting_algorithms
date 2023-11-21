#include "sort.h"
/**
 *bubble_sort - Sort a set of integers in ascending order
 *@array: An array of ints
 *@size: The size of array
 *Return: void.
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t z, a;

	if (array == NULL || size == 0)
		return;

	a = 0;
	while (a < size)
	{
		z = 0;
		while (z < size - 1)
		{
			if (array[z] > array[z + 1])
			{
				temp = array[z + 1];
				array[z + 1] = array[z];
				array[z] = temp;
				print_array(array, size);
			}
			z++;
		}
		a++;
	}
}

