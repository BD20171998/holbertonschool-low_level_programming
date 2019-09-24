#include "holberton.h"

/**
  * _abs - function that computes the absolute value of an integer
  * Return: Absolute value of a number
  * @n: Integer to be checked
  */

int _abs(int n)
{
	if (n > 0)
		return (n);

	else if (n < 0)
	{
		n = n * -1;
		return (n);
	}

	else
		return (0);
}
