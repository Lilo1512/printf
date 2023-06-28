#include "main.h"

/**
 * _oct - function to print octal
 * @octo: list being passed
 * Return: updated count
 */
int _oct(va_list octo)
{
	int counts = 0, i;
	int *array;
	unsigned int m = va_arg(octo, unsigned int);
	unsigned int tmp = m;

	while (m / 8 != 0)
	{
		m /= 8;
		count++;
	}
	count++;
	array = malloc(counts * sizeof(int));
	for (i = 0; i < counts; i++)
	{
		array[i] = tmp % 8;
		tmp /= 8;
	}
	for (i = counts - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(array);
	return (counts);
}
