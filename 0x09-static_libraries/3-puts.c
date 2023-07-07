#include "main.h"

/**
 * _puts - a function that prints a string
 * @s: string input
 * Return: string
 */
void _puts(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
