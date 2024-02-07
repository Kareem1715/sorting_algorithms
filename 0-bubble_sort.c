#include "sort.h"

void mySwap(int *first, int *second);

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: This array have a numbers
 * @size: This is a size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				mySwap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}

/**
 * mySwap - Swaps the two values
 * @first: First value
 * @second: Second value
 */
void mySwap(int *first, int *second)
{
	int tmp;

	tmp = *first;
	*first = *second;
	*second = tmp;
}
