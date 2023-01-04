#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - function that locates the first occurence in the string
 *
 * Return: pointer  to the byte in s or NULL if no bytes is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	for (; s > 0; i++)
	{
		s[i] = accept;
		s--;
	}
return (0);
}
