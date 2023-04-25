#include <stdio.h>
#include <sort.h>

/**
 * bubble_sort - Arranges numbers or other elements in the correct order.
 * @array: The array to be printed
 * @size: Number of elements in @array
 */


void bubble_sort(int *array, size_t size)
{
	int temp, i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
