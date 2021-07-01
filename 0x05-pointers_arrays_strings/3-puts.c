#include "holberton.h"

/**
 * _puts - main function.
 * @str: Pointer with the address value.
 * Description: This function takes a pointer to an int as parameter
 * and updates the value it points to to 98.
 *
 * Return: none.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
