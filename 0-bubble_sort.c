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
    size_t i, j, k;
    bool swapped;

    for (i = 0; i < size - 1; ++i)
    {
        swapped = false;

        for (j = 0; j < size - i - 1; ++j)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                swapped = true;
            }
        }

        for (k = 0; k < size; ++k)
        {
            printf("%d", array[k]);
            if (k < size - 1)
                printf(", ");
        }
        printf("\n");

        if (!swapped)
        {
            break;
        }
    }
}


