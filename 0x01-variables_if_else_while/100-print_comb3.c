#include <stdio.h>
/**
 * main - print all possible different combinations of two digits.
 * Return: 0
 */
int main(void)
{
	int c = 0;

	int f_d;

	int 1_d;

	while (c <= 99)
{
	f_d = (c / 10 + '0');

	1_d = (c % 10 + '0');

	if (f_d < 1_d)
	{
		putchar(f_d);
		putchar(1_d);

		if (c != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	c++;
}
putchar('\n');
return (0);
}
