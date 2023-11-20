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
 * lomuto_part - Order a subset of an array by lomuto
 * @array: The array.
 * @size: The size
 * @low: The starting index
 * @high: The ending index
 * Return: The partition index.
 */
int lomuto_part(int *array, size_t size, int low, int high)
{
	int *pivot, before, after;

	pivot = array + high;
	before = low;
	after = before;
	while (after < high)
	{
		if (array[after] < *pivot)
		{
			if (after > before)
			{
				swp(array + after, array + before);
				print_array(array, size);
			}
			before++;
		}
		after++;
	}

	if (*pivot < array[before])
	{
		swp(array + before, pivot);
		print_array(array, size);
	}

	return (before);
}

/**
 * sort - Implement the quicksort algorithm through recursion.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * @low: The starting index of the array partition to order.
 * @high: The ending index of the array partition to order.
 * Return: void
 */
void sort(int *array, size_t size, int low, int high)
{
	int mid;

	if (high - 1 > low - 1)
	{
		mid = lomuto_part(array, size, low, high);
		sort(array, size, low, mid - 1);
		sort(array, size, mid + 1, high);
	}
}

/**
 * quick_sort - Sort an array using quicksort algorithm.
 * @array: An array of integers.
 * @size: The size
 * Return: Void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;

	sort(array, size, 0, size - 1);
}
