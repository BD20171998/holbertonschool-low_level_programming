#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: Int pointer for array to be searched
 * @size: Size of the array
 * @cmp: Pointer to function to be used to compare values
 * Return: The index of the first element for which the cmp function does not
 * return 0, -1 if no element matches or if size is less than or equal to 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);

}
