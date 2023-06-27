#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order
 * @array: the array to be sorted
 * @size: the size of the array
 */

void shell_sort(int *array, size_t size)
{
	size_t gap = 1;
	size_t i, j;
	int temp;

	if (size < 2)
		return;

	/* Calculate the initial gap using Knuth sequence */
	while (gap < size / 3)
		gap = gap * 3 + 1;
	/*start with th elargest gp and reduce it in each iteration */
	for (; gap > 0; gap /= 3)
	{
		/* Perform an insertion sort fir element at a distance of gap */
		for (i = gap; i < size; i++)
		{
			/*Store the current element to be inserted later */
			temp = array[i];

			/*Shift elements that are greater than the current element */
			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
				array[j] = array[j - gap];

			/*Insert the stored element at the correct position */
			array[j] = temp;
		}
		/*Print the array after each decrease in the interval */
		print_array(array, size);
	}
}

