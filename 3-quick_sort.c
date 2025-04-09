#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap - Swaps two integers in an array
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 *
 * Return: void
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * partition - Partition an array using the Lomuto partition scheme
 * @array: The array to be partitioned
 * @low: Starting index of the partition
 * @hight: Ending index of the partition
 *
 * Return: Index of the pivot element
 */
int partition(int *array, int low, int hight)
{
	int pivot = array[hight];
	int i = low - 1;
	int j;

	for (j = low; j < hight; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[hight]);
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
	int pa;

	if (low < high)
	{
		pa = partition(array, low, high);
		print_array(array, size);
		quick_sort_rec(array, low, pa - 1, size);
		quick_sort_rec(array, pa + 1, high, size);
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
