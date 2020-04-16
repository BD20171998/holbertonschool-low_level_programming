#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 * https://www.techiedelight.com/interpolation-search/
 * @array: int  pointer to the first element of the array to search in
 * @size: size_t variable for number of elements in array
 * @value: int value to search for
 * Return:  first index where value is located, -1 if otherwise
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high, mid, n = (int) size;

	high = n - 1;

	while (array[high] != array[low] && value >= array[low] && value <=
	       array[high])
	{
		mid = low + ((value - array[low]) * (high - low) /
			     (array[high] - array[low]));

		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);

		if (value == array[mid])
			return (mid);

		else if (value < array[mid])
			high = mid - 1;

		else
			low = mid + 1;
	}

	if (value == array[low])
		return (low);

	else
	{
		printf("Value checked array[%d] is out of range\n", mid);
		return (-1);
	}
}
