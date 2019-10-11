#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: char pointer for string
 * Return: int for length of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);

	return (0);
}

/**
 * check_pal - helper function that determines whether a string is a
 * palindrome
 * @s: char string to check
 * @l: int for string length
 * @b: int index for beginning string position
 * @e: int index for end string position
 * Return: 1 if string is a palindrome or 0 otherwise
 */

int check_pal(char *s, int l, int b, int e)
{

	if (s[b] != s[e])
		return (0);

	if (b >= e)
		return (1);

	b++;
	e--;

	return (check_pal(s, l, b, e));
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome and
 * 0 if not
 * @s: char string to check
 * Return: 1 if string is a palindrome or 0 otherwise
 */

int is_palindrome(char *s)
{
	int b, e, l;

	l = _strlen_recursion(s);

	if (l == 0 || *s == '\0')
		return (1);

	e = l - 1;
	b = 0;

	return (check_pal(s, l, b, e));
}
