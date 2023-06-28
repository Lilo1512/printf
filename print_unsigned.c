#include "main.h"

/**
 * _ui - unsigned int print to stdout
 * @unsign: list being passed
 * Return: char count
 */
int _ui(va_list unsign)
{
	unsigned int m;
	int expo = 1;
	int len = 0;

	m = va_arg(unsign, unsigned int);

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
