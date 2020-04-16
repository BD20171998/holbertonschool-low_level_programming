#include "search_algos.h"

/**
 * min - function that returns the minimum of 2 integers
 * @s: int that represents step value
 * @n: int that represents size of array
 * Return: minimum value as int
 */

int min(int s, int n)
{
	return ((s <= n) ? s : n);
}

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
 * binary_search_help - helper function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: int  pointer to the first element of the array to search in
 * @start: int variable to indicate starting point of binary search
 * @end: int variable to indicate ending point of binary search
 * @value: is the value to search for
 * Return: first index where value is located, -1 if array is NULL or
 * value is not found
 */

int binary_search_help(int *array, int start, int end, int value)
{
	int l, m, r;

	if (array == NULL)
		return (-1);

	l = start;
	r = end;

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

/**
 * exponential_search - function that searches for a value in a sorted array of
 * integers using the Exponential search algorithm
 * @array: int pointer to the first element of the array to search in
 * @size: size_t variable for number of elements in array
 * @value: int to search for in array
 * Return: first index where value is located, -1 otherwise
 */
int exponential_search(int array[], size_t size, int value)
{
	int bound = 1, lower, upper;

	if (size == 0)
		return (-1);

	while (bound < (int) size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	lower = bound / 2;
	upper =  min(bound, ((int) size) - 1);

	printf("Value found between indexes [%d] and [%d]\n", lower, upper);

	return (binary_search_help(array, lower, upper, value));
}
