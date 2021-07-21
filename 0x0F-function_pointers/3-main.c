#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Principal
 *
 * @ac: count arguments
 * @ag: array
 *
 * Return: Always 0
 */
int main(int arc, char *arg[])
{
	int num1, num2, (*operate)(int, int);

	if (arc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*arg[2] != '+' &&
		*arg[2] != '-' &&
		*arg[2] != '/' &&
		*arg[2] != '*' &&
		*arg[2] != '%')
		|| arg[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(arg[1]);
	num2 = atoi(arg[3]);
	if ((*arg[2] == '/' || *arg[2] == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	operate = get_op_func(arg[2]);
	printf("%d\n", operate(num1, num2));
	return (0);

}
