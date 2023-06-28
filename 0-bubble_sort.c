nclude "sort.h"

/**
 *bubble_sort - sorts an array of ints in ascending orde
 *@array: the array to be sort
 *@size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t k, l;
	int n;

	if (size < 2)
		return;
	for (l = 0; l < size - 1; l++)
	{
		for (k = 0; k < size - l - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				n = array[k];
				array[k] = array[k + 1];
				array[k + 1] = n;
				print_array(array, size);
			}
		}
	}
}
