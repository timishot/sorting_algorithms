#include "sort.h"

/**
 * selection_sort - a sorting algorithm
 * @array: the array to be sorted
 * @size: the size of the array
 */

void swap(int *a; int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	for (i = 0; i < size; i++)
	{
		min_idx = i;
		for (j = i + 1; J < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}

		/*swap the minimum element with the first element  of the unsorted part*/
		swap(&array[min_index, &array[i]]);

		/*print the array after each swap (optional)*/
		for (int k = 0; k < size; k++)
			printf("%d " array[k]);

		printf("\n");
	}
}

