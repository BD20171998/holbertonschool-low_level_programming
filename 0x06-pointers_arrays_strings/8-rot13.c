#include "holberton.h"

/**
 * rot13 - function that encodes a string using rot13
 * @c: char pointer to covert to Rot13
 * Return: char pointer with converted string to Rot13
 */

char *rot13(char *c)
{
	int i = 0, j;

	char a[52][2] = {{'a', 'n'}, {'b', 'o'}, {'c', 'p'}, {'d', 'q'},
			 {'e', 'r'}, {'f', 's'}, {'g', 't'}, {'h', 'u'},
			 {'i', 'v'}, {'j', 'w'}, {'k', 'x'}, {'l', 'y'},
			 {'m', 'z'}, {'n', 'a'}, {'o', 'b'}, {'p', 'c'},
			 {'q', 'd'}, {'r', 'e'}, {'s', 'f'}, {'t', 'g'},
			 {'u', 'h'}, {'v', 'i'}, {'w', 'j'}, {'x', 'k'},
			 {'y', 'l'}, {'z', 'm'}, {'A', 'N'}, {'B', 'O'},
			 {'C', 'P'}, {'D', 'Q'}, {'E', 'R'}, {'F', 'S'},
			 {'G', 'T'}, {'H', 'U'}, {'I', 'V'}, {'J', 'W'},
			 {'K', 'X'}, {'L', 'Y'}, {'M', 'Z'}, {'N', 'A'},
			 {'O', 'B'}, {'P', 'C'}, {'Q', 'D'}, {'R', 'E'},
			 {'S', 'F'}, {'T', 'G'}, {'U', 'H'}, {'V', 'I'},
			 {'W', 'J'}, {'X', 'K'}, {'Y', 'L'}, {'Z', 'M'},};

	while (*(c + i) != '\0')
	{
		for (j = 0; j < 52; ++j)
		{
			if (*(c + i) == a[j][0])
			{
				*(c + i) = a[j][1];
				break;
			}
		}
			++i;
	}
	return (c);
}
