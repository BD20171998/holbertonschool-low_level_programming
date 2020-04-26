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
 * advanced_binary_help - main helper function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: int  pointer to the first element of the array to search in
 * @low: int that tracks the lower bound of the sub-array to be checked
 * @high: int that tracks the upper bound of the sub-array to be checked
 * @value: is the value to search for
 * Return: first index where value is located, -1 if array is NULL or
 * value is not found
 */


int advanced_binary_help(int *array, int low, int high, int value)
{
	int mid = 0;

	mid =  low + (high - low) / 2;

	if  (low > high)
		return (-1);

	printer(array, low, high);

	if (value == array[mid] && value != array[mid - 1])
		return (mid);

	else if (value < array[mid] || value == array[mid - 1])
		return (advanced_binary_help(array, low, mid, value));

	else
		return (advanced_binary_help(array, mid + 1, high, value));
}

/**
 * advanced_binary - function that searches for a value in a
 * sorted array of integers using the binary search algorithm that
 * handles duplicates
 * @array: int  pointer to the first element of the array to search in
 * @size: size_t variable of  the number of elements in array
 * @value: the value to search for
 * Return: first index where value is located, -1 if array is NULL or
 * value is not found
 */

int advanced_binary(int *array, size_t size, int value)
{
	int high;

	if (array == NULL)
		return (-1);

	high = (int) size;

	return (advanced_binary_help(array, 0, high - 1, value));
}
