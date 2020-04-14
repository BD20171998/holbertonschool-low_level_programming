#include "search_algos.h"

/**
 * printer - function that prints current sub array that's being examined
 * @array: Original int array
 * @l: int for starting index value of sub-array
 * @r: int for ending index of sub-array
 * Return: Void
 */

void printer(int *array, int l, int r)
{
	int i;

	printf("Searching in array: ");

	for (i = l; i <= r; i++)
	{
		if (i == r)
		{
			printf("%d\n", array[i]);
			return;
		}

		printf("%d, ", array[i]);
	}
}


/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: int  pointer to the first element of the array to search in
 * @size: size_t variable of  the number of elements in array
 * @value: is the value to search for
 * Return: first index where value is located, -1 if array is NULL or
 * value is not found
 */

int binary_search(int *array, size_t size, int value)
{
	int l, m, r;

	if (array == NULL)
		return (-1);

	l = 0;
	r = (int) size - 1;

	while (l <= r)
	{
		m = (l + r) / 2;

		printer(array, l, r);

		if (array[m] < value)
			l = m + 1;

		else if (array[m] > value)
			r = m - 1;

		else if (array[m] == value)
			return (m);
	}

	return (-1);
}
