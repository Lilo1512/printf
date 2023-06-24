#include "main.h"

/**
 * git_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @x: List of arguments to be printed.
 * @args: list of arguments.
 * Return: width.
 */

int git_width(const char *format, int *x, va_list args)
{
	int curr_x;
	int width = 0;

	for (curr_x = *x + 1; format[curr_x] != '\0'; curr_x++)
	{
		if (is_digit(format[curr_x]))
		{
			width *= 10;
			width += format[curr_x] - '0';
		}
		else if (format[curr_x] == '*')
		{
			curr_x++;
			width = va_arg(args, int);
			break;
		}
		else
			break;
	}

	*x = curr_x - 1;

	return (width);
}
