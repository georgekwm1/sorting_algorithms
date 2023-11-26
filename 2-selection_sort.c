#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer
 * @b: The second integer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *m;
	size_t len, len2;

	if (array == NULL || size < 2)
		return;

	for (len = 0; len < size - 1; len++)
	{
		m = array + len;
		for (len2 = len + 1; len2 < size; len2++)
			m = (array[len2] < *m) ? (array + len2) : m;

		if ((array + len) != m)
		{
			swap_int(array + len, m);
			print_array(array, size);
		}
	}
}
