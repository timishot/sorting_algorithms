#include "sort.h"
/**
 * bubble_sort - sort an array of integers in ascending order.
 * @array: AN array of integers to sort.
 * @size: The size of the array.
 *
 * Description: prints the array aftrer each swap.
 */

void bubble_sort(int *array, size_t size)
{

	size_t i;
	for (i = 0; i < size-1; i++)
	{
		size_t j;
		for (j = 0; j < size -1; j++)
		{
			if (array[j] > array[j + 1])
			{
				/*Swap array[j] and array[j + 1]*/
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				/*Print the array after each swap */
				print_array(array, size);
			}
		}
	}
}
