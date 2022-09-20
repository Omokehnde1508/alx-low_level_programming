#include "main.h"

/**
 * print_rev - for printiing a string in reverse order
 * @s: reverse string
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		_putchar(*(s + len));

	_putchar('\n');
}
