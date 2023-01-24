#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in
 *		 ascending order using the
 *		 bubble sort algorithm.
 *
 * @array: The array to be printed.
 * @size: Number of elements in @array.
 *
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t cnt;
	bool swapped = true;

	while(swapped)
	{
		swapped = false;
		for(cnt = 0; cnt < (size - 1); cnt++)
		{
			if(array[cnt] > array[cnt+1])
			{
				temp = array[cnt];
				array[cnt] = array[cnt+1];
				array[cnt+1] = temp;
				swapped = true;
			}
		}
	}
}
