#include <stdio.h>

/**
 * print_buffer - prints buffer of a char string
 * @b: buffer to print
 * @size: size of buffer
 * Return: nothing
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%08x: ", i);
			j = 0;
			while (j < 10)
			{
				if (j % 2 == 0 && j != 0)
					printf(" ");
				if ((j + i) > size - 1)
				{
					printf("  ");
				}
				else
					printf("%.2x", b[i + j]);
				j++;
			}
			printf(" ");
			j = 0;
			while (j < 10)
			{
				if ((j + i) > size - 1)
					break;
				if (b[j + i] <= 31 || b[j + 1] >= '~')
					b[j + i] = '.';
				putchar(b[j + i]);
				j++;
			}
			printf("\n");
		}
	}
}
