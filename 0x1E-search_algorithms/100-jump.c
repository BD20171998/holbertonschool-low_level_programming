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
 * jump_search - function that searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: int pointer to the first element of the array to search in
 * @size: size_t variable for number of elements in array
 * @value: int to search for in array
 * Return: first index where value is located, -1 otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	int n = (int) size, prev = 0, step, x;

	if (array == NULL)
		return (-1);

	step = sqrt(n);

	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

		if (array[min(step + sqrt(n), n) - 1] >= value || prev == n - 1)
		{
			printf("Value found between indexes [%d] and [%d]\n",
			       prev, step);
			break;
		}

		prev = step;
		step += sqrt(n);
	}

	for (x = prev; x <= step; x++)
	{
		printf("Value checked array[%d] = [%d]\n", x, array[x]);

		if (array[x] == value)
			return (x);

		if (x == n - 1)
			return (-1);
	}
	return (-1);
}
