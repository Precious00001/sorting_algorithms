#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @w: The first integer to swap.
 * @q: The second integer to swap.
 */
void swap_ints(int *w, int *q)
{
	int tmp;

	tmp = *w;
	*w = *q;
	*q = tmp;
}

/**
 * selection_sort - Sort an array of integers in ascending order.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *mini;
	size_t l, j;

	if (array == NULL || size < 2)
		return;

	for (l = 0; l < size - 1; l++)
	{
		mini = array + l;
		for (j = l + 1; j < size; j++)
			mini = (array[j] < *mini) ? (array + j) : mini;

		if ((array + l) != mini)
		{
			swap_ints(array + l, mini);
			print_array(array, size);
		}
	}
}
