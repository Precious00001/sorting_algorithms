#include "sort.h"

/**
 * swap - swap two int
 * @w: int 1
 * @b: int 2
 * Return: (void) Swaped int
 */
void swap(int *w, int *q)
{
	int tmp;

	tmp = *w;
	*w = *q;
	*q = tmp;
}
/**
 * partition - Partition an array and using pivot
 * @array: Array
 * @l: int
 * @h: int
 * @size: size of array (size_t)
 * Return: index of pivote (int)
 */
int partition(int *array, int l, int h, size_t size)
{
	int pivot = array[h];
	int i = l - 1, y;

	for (y = l; y <= h; y++)
	{
		if (array[y] <= pivot)
		{
			i++;
			if (i != y)
			{
				swap(&array[i], &array[y]);
				print_array(array, size);
			}
		}
	}
	return (i);
}
/**
 * lomuto_qsort - Sorting Recursively an Array
 * @array: Array to be sorted
 * @l: The lowest value of the array
 * @h: highest value of the array
 * @size: Size of The Array
 * Return: void
 */
void lomuto_qsort(int *array, int l, int h, size_t size)
{
	int e;

	if (l < h)
	{
		e = partition(array, l, h, size);
		lomuto_qsort(array, l, e - 1, size);
		lomuto_qsort(array, e + 1, h, size);
	}
}
/**
 * quick_sort - Quick Sort Algorithme using lomuto partition
 * @array: Array to sort
 * @size: Size of The Array
 * Return: Sorted Array (void)
 */
void quick_sort(int *array, size_t size)
{
	lomuto_qsort(array, 0, size - 1, size);
}
