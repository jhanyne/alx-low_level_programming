#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @*s: memmory where pointer is returned to
 * @c: memory where the pointer is returned from
 *
 * Return: located a character in a string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; i < 0; i++)
	{
		*s[i] = c;
	}
	return (*s);
}
