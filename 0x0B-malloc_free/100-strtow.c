#include "holberton.h"
#include <stdlib.h>

/**
 * wordcount - function that counts words delimited by space
 * @str: Char pointer for text blob to check
 * Return: Number of words in text blob with space as a
 * delimiter
 */

int wordcount(char *str)
{

	int i, wc = 0;

	for (i = 0; str[i]; i++)
	{

		if (str[i] != ' ')
		{
			wc++;

			for (; str[i + 1] != ' ' && str[i + 1] != '\0'; i++)
				;
		}

	}
	return (wc);
}

/**
 * word_len - function that counts word length delimted by space
 * @str: Char pointer for word to check
 * Return: Length of word
 */

int word_len(char *str)
{
	int i, wl = 0;

	for (i = 0; str[i] && str[i] != ' '; i++)
		++wl;

	return (wl);
}

/**
 * free_grid - function that frees a 2 dimensional grid of char pointers
 * @grid: char double pointer to be freed
 * @height: int for height of 2D array to be passed
 * Return: void
 */

void free_grid(char **grid, int height)
{
	int k;

	for (k = 0; k <= height; k++)
		free(grid[k]);

	free(grid);
}

/**
 * strtow - function that splits a string into words
 * @str: Char double pointer for string to examine
 * Return: Char double pointer of  an array of strings (words)
 */

char **strtow(char *str)
{
	int i, j = 0, k, wc, wl;

	char **s = NULL;

	wc = wordcount(str);

	s = malloc((sizeof(char *)) * (wc + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			wl = (word_len(str + i));

			s[j] = malloc((wl + 1) * sizeof(char));

			if (s[j] == NULL)
			{
				free_grid(s, j);
				return (NULL);
			}

			for (k = 0; str[i] != '\0'  && str[i] != ' '; i++, k++)
				s[j][k] = str[i];

			s[j][k] = '\0';

			j++;
		}
	}

	s[j] = '\0';

	return (s);
}
