#include "sort.h"

void mySwap(int *first, int *second);

/**
 * selection_sort - sorts an array of integers
 * in ascending order
 * @array: This array have a numbers
 * @size: This is a size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int *smallest;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		/* Points to first element */
		smallest = &array[i];

		for (j = i + 1; j < size; j++)
			if (array[j] < *smallest)
			/* Make the pointer points to the smallest */
				smallest = &array[j];

		/* After finsh the inner loop swap the first to smallest*/
		if (*smallest != array[i])
		{
			mySwap(&array[i], smallest);
			print_array(array, size);
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
