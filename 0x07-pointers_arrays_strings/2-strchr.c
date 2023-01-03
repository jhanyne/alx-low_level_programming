#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @*s: string where pointer is returned
 * @c: memory where the pointer is returned from
 *
 * Return: located a character in a string
 */
char *_strchr(char *s, char c)
{
	char *s = "hello";
	char c;

	c = _strchr(*s, '1');

	if (c != NULL)
	{
		printf("%s\n", c);
	}
	return (1);
}

