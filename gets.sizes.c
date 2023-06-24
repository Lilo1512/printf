#include "main.h"

/**
 * gets_sizes - calculates the size to cast the argument
 * @format: formatted string in which to print the arguments
 * @a: list of arguments to be printed.
 *
 * Return: Precision.
 */
int gets_sizes(const char *format, int *a)
{
int curr_a = *a + 1;
int sizes = 0;
if (format[curr_a] == 'i')
sizes = S_LONG;
else if (format[curr_a] == 'l')
sizes = S_SHORT;
if (sizes == 0)
*a = curr_a - 1;
else
*a = curr_a;
return (sizes);
}
