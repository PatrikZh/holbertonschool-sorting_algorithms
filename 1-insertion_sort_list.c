#include "sort.h"

/**
 * insertion_sort_list - function
 * @list: parameter
 */

void insertion_sort_list(listint_t **list)
{
	size_t i, j;
	int tmp;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size - 1; i++)
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
}
