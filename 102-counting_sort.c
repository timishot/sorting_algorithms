#include "sort.h"

/**
 * counting_sort - Sorts an array of integers in ascending order using
 *                 the Counting sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 */
void counting_sort(int *array, size_t size)
{
	int max_value = 0;
	size_t i, j;
	int *count_array, *output_array;

	if (array == NULL || size < 2)
		return;

	/* Find the maximum value in the array */
	for (i = 0; i < size; i++)
	{
		if ((size_t)array[i] > (size_t)max_value)
			max_value = array[i];
	}

	/* Allocate memory for the count array */
	count_array = malloc((max_value + 1) * sizeof(int));
	if (count_array == NULL)
		return;

	/* Initialize the count array with zeros */
	for (i = 0; i <= max_value; i++)
		count_array[i] = 0;

	/* Count the occurrences of each element in the input array */
	for (i = 0; i < size; i++)
		count_array[array[i]]++;
	/* Print the count array */
	printf("%d", count_array[0]);
	for (i = 1; i <= max_value; i++)
		printf(", %d", count_array[i]);
	printf("\n");

	/* Allocate memory for the output array */
	output_array = malloc(size * sizeof(int));
	if (output_array == NULL)
	{
		free(count_array);
		return;
	}

	/*Generate the sorted array using the count array */
	j = 0;
	for (i = 0; i <= max_value; i++)
	{
		while (count_array[i] > 0)
		{
			output_array[j++] = i;
			count_array[i]--;
		}
	}

	/* Copy the sorted output array back to the input array */
	for (i = 0; i < size; i++)
		array[i] = output_array[i];

	/* Free the dynamically allocated memory */
	free(count_array);
	free(output_array);
}
