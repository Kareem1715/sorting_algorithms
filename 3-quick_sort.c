#include "sort.h"

void mySwap(int *first, int *second);
void lomutoQuick(int *array, size_t size, int fstIdx, int lstIdx);
int arrayPartition(int *array, size_t size, int bgn, int lst);


/**
 * quick_sort - sorts an array of integers
 * in ascending order using Quick sort
 * @array: This array have a numbers
 * @size: This is a size of array
 */
void quick_sort(int *array, size_t size)
{
	/* Applied to a range of at least two elements*/
	if (!array || size < 2)
		return;

	/* Partitions the given array around the pivot (last element)*/
	lomutoQuick(array, size, 0, size - 1);
}

/**
 * lomutoQuick - sorts left and right subarrays
 * @array: This array have a numbers
 * @size: This is a size of array
 * @fstIdx: This is the first index of array or subarray
 * @lstIdx: This is last index of array of subarray
 */
void lomutoQuick(int *array, size_t size, int fstIdx, int lstIdx)
{
	int pivot;

	if (fstIdx > lstIdx)
		return;

	pivot = arrayPartition(array, size, fstIdx, lstIdx);

	/* Recursive to sort LEFT subarray */
	lomutoQuick(array, size, fstIdx, pivot - 1);

	/* Recursive to sort RIGHT subarray */
	lomutoQuick(array, size, pivot + 1, lstIdx);

}

/**
 * arrayPartition - This function partition the array
 *
 * @array: This array have a numbers
 * @size: This is a size of array
 * @bgn: The beganing of subarray
 * @lst: The last of subarray
 *
 * Return: The index of pivot in subarray
 */
int arrayPartition(int *array, size_t size, int bgn, int lst)
{
	int pivot = array[lst], i, j = bgn - 1;

	for (i = bgn; i < lst; i++)
	{
		if (array[i] <= pivot)
		{
			j++;
			mySwap(&array[j], &array[i]);
			if (i != j) /* IF swaped with itself don't print it*/
				print_array(array, size);
		}
	}
	mySwap(&array[j + 1], &array[lst]);
	if (j + 1 != i) /* IF the last elment is the biggest one */
		print_array(array, size);
	return (j + 1); /* Return index of pivot */
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
