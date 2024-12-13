#include "sort.h"

/**
 * selection_sort - sorts an array  of integers in ascending order
 * @array: int *
 * @size: size_t
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int temp;
	int current;

	for (i = 0; i < size; i++)
	{
		current = array[i];
		for (j = i; j < size; j++)
		{
			if (current > array[j])
			{
				current = array[j];
				temp = j;
			}
		}
		if (current != array[i])
		{
			array[temp] = array[i];
			array[i] = current;
			print_array(array, size);
		}
	}
}
