#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Program that prints whether a random integer is positive or negative
 * Return: 0
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;

	if (last > 5)
		printf("The last digit of %i is %i and is greater than 5\n", n, last);

	else if (last == 0)
		printf("The last digit of %i is %i and is 0\n", n, last);

	else
		printf("The last digit of %i is %i and is less than 6 and not 0\n", n, last);

	return (0);
}
