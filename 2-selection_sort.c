#include "sort.h"

/**
 * selection_sort - function
 * @array: parameter
 * @size: parameter
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	for (j = 0; j < size; j++)
	{
		if (array[i] > array[i + 1])
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
			print_array(array, size);
		}

	}
}
