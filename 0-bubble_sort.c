#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap - Swaps 2 integers
 *
 * @a: 1st Integer
 * @b: 2nd Integer
 */

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * bubble_sort - Sorts list in ascending order
 *
 * @array: Array
 * @size: size of Array
 */

void bubble_sort(int *array, size_t size)
{
    size_t i;
    bool swapped;

    if (array == NULL || size < 2)
		return;

    while (swapped == false)
	{
		swapped = true;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				swapped = false;
			}
		}
		size--;
	}
}
