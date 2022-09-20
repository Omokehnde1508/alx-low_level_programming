#include <stdio.h>
#include "main.h"

/**
 * puts_half - print half of the string
 * @str: string to print
 */

void puts_half(char *str)

{

	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)

		putchar(*(str + i));

	putchar('\n');

}
