#include "main.h"
 
/**
 * _puts - function to put character
 * @str: parameter for the function put
 * Return: success
 */

void _puts(char *str)
{
	for (; *str !=  '\0' ; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
