#include "variadic_functions.h"
/**
 * print_c - Prints char
 * @list: arguments
 * Return: void
 */
void print_c(va_list list)
{
	printf("%c", (char)va_arg(list, int));
}
/**
 * print_d - Prints digit
 * @list: arguments
 * Return: void
 */
void print_d(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_f - Prints float
 * @list: arguments
 * Return: void
 */
void print_f(va_list list)
{
	printf("%f", (float)va_arg(list, double));
}
/**
 * print_str - Prints str
 * @list: arguments
 * Return: void
 */
void print_s(va_list list)
{
	char *str = va_arg(list, char *);

	if (str)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}

/**
 * print_all - Prints anything
 * @format: format to print
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *separator = "";
	int i = 0, j;

	filter filt[] = {
	    {'c', print_c},
	    {'i', print_d},
	    {'f', print_f},
	    {'s', print_s}
	};
	va_start(list, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == filt[j].fmt)
			{
				printf("%s", separator);
				filt[j].f(list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
/* hello Lau */
