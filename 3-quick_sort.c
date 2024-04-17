#include "sort.h"

/**
 * _swap - function to swap to elements
 * @a: 1st element
 * @b: 2nd element
 *
 * Return : Always 0
 */

void _swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * partition - Lomuto partition scheme.
 * @array: array to be partition
 * @low: first element of arr
 * @high: last element of arr
 * @size: size of arr
 *
 * Return: pivot index
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1, j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			_swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	_swap(&array[i + 1], &array[high]);
	print_array(array, size);
	return (i + 1);
}

/**
 * quick_sort_copy - sorting integers in ascending order using quick sort alg
 * @arr: array to sort
 * @size: size of array
 * @low: first index of array
 * @high: last index of array
 *
 * Return: Always 0
 */


void quick_sort_copy(int *arr, size_t size, int low, int high)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quick_sort_copy(array, size, low, pivot - 1);
		quick_sort_copy(array, size, pivot + 1, high);
	}
}

/**
 * quick_sort - sorts array of integers in ascending order
 * @array: array to sort
 * @size: size of array
 *
 * Return: Always 0
 */

void quick_sort(int *array, size_t size)
{
	if (!array)
	{
		return;
	}
	quick_sort_copy(array, size, 0, size - 1);
}
