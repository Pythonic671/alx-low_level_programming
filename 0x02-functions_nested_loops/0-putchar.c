#include<stdio.h>
/**
 * program to print _putchar plus a new line
 *
 * Return: Always 0 (success)
 */
int main()
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++
	}
	putchar("\n");
	return 0;
}
