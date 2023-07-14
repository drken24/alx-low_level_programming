
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ken, e, q;

	e = 'e';
	q = 'q';

	for (ken = 'a'; ken <= 'z'; ken++)
	{
		if (ken != e && ken != q)
			putchar(ken);
	}
	putchar('\n');

	return (0);
}
