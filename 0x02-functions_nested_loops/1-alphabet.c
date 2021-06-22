#include "holberton.h"

/**
* print_alphabet - llamar la funcion desde el main
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
