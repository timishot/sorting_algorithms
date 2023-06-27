#include "sort.h"


/**
 * swap - it  is uses to swap two integers
 * @a: first to to be swap.
 * @b: second.
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - a sorting algorithm
 * @array: the array to be sorted
 * @size: the size of the array
 */


void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx, k;

	for (i = 0; i < size; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
		}

		/*swap the minimum element with the first element  of the unsorted part*/
		swap(&array[min_idx], &array[i]);

		/*print the array after each swap (optional)*/
		for (k = 0; k < size; k++)
			printf("%d ", array[k]);

		printf("\n");
	}
}

