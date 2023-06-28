#include "main.h"

/**
 * _int - function to print integers
 * @integ: list printed
 * Return: Return count
 */
int _int(va_list integ)
{
	int x, expo = 1, len = 0;
	unsigned int m;

	x = va_arg(integ, int);

	if (x < 0)
	{
		len = len + _putchar('-');
		m = x * -1;
	}
	else
		m = x;
	while (m / expo > 9)
		expo *= 10;

	while (expo != 0)
	{
		len = len + _putchar(m / expo + '0');
		m = m % expo;
		expo = expo / 10;
	}
	return (len);
}
