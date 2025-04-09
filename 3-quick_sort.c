#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap - Swaps two integers in an array
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 * @array: The array being sorted
 * @size: Size of the array
 *
 * Return: void
 */
void swap(int *a, int *b, int *array, size_t size)
{
	if (*a != *b)
	{
		int tmp;

		tmp = *a;
		*a = *b;
		*b = tmp;
		print_array(array, size);
	}
}

/**
 * partition - Partition an array using the Lomuto partition scheme
 * @array: The array to be partitioned
 * @low: Starting index of the partition
 * @high: Ending index of the partition
 * @size: Size of the array
 *
 * Return: Index of the pivot element
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
				swap(&array[i], &array[j], array, size);
		}
	}
	if (i + 1 != high)
		swap(&array[i + 1], &array[high], array, size);
	return (i + 1);
}

/**
 * quick_sort_rec - Recursive function for Quick Sort
 * @array: The array to be sorted
 * @low: Starting index
 * @high: Ending index
 * @size: Number of elements in the array
 *
 * Return: void
 */
void quick_sort_rec(int *array, int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = partition(array, low, high, size);
		quick_sort_rec(array, low, pivot_index - 1, size);
		quick_sort_rec(array, pivot_index + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort
 * @array: The array to be sorted
 * @size: Number of elements in the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_rec(array, 0, size - 1, size);
}
