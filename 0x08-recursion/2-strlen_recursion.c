#include "main.h"
/**
 * _strlen_recursion - fuction that returns the length of the string
 * @s: length of string
 */int _strlen_recursion(char *s)
{
	if (*s)
	{
		_strlen_recursion(s + 1);
		_putchar(*s);
	}
}
