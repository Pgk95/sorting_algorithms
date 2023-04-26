#include <stdio.h>
#include "sort.h"

/**
 * swap - Swaps two integers in an array
 *
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */

void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

/**
 * lomuto_partition - Partions an array using Lomuto partition.
 *
 * @array: Pointer to the array being partitioned
 * @low: Index of the low wnd of the partition being sorted
 * @high: Index of the high end of the partition being sorted
 * @size: Size of the array being sorted
 *
 * Return: The final index of the pivot element
 */

int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[high] < array[i + 1])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * quick_sort_helper - sorts a partition of an array using the quick
 * sort method
 *
 * @array: Pointer to the array being sorted
 * @low: Index of the low wnd of the partition being sorted
 * @high: Index of the high end of the partition being sorted
 * @size: Size of the array being sorted
 */

void quick_sort_helper(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot_index = lomuto_partition(array, low, high, size);

		quick_sort_helper(array, low, pivot_index - 1, size);
		quick_sort_helper(array, pivot_index + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order using quick
 * sort method
 *
 * @array: Pointer to the array being sorted
 * @size: Size of the array being sorted
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_helper(array, 0, size - 1, size);
}
