#include "sort.h"

/**
 * selection_sort - sorts an array  of integers in ascending order
 * @array: int *
 * @size: size_t
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	int i;
	int j;
	int temp;
	int current;

	for (i = 0; i < size; i++)
	{
		current = i;
		for (j = i + 1; j < i; j++)
		{
			if (array[j] > array[current])
			{
				current = j;
			}
		}
		if (current != i)
		{
			temp = array[current];
			array[current] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
