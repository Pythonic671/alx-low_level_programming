#include "main.h"

/**
 * reset_to_98 - updates the value of the variable
 * the pointer points to to 98
 * @n: pointer to the variable to update
 */
void reset_to_98(int *n)
{
	*n = 98;
}
int main(void)
{
	int n;
	int *p;

	p = &n;
	n = 402;
	_putchar("The value of 'n' before the call: %d\n", n);
	reset_to_98(n);
	_putchar("The value of 'n' after the call: %d\n", n);
	return (0);
}
