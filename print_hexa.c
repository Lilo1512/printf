#include "main.h"

/**
 * _hex_str - converts the number from base 10 to hex
 * @m: number to be converted
 * @hex: base of 16 being passed
 * @alpha: Char 'A' to 'F' or 'a' to 'f'
 * Return: number of chars printed
 */
int _hex_str(unsigned int m, unsigned int hex, char alpha)
{
	unsigned int x = m % hex;
	unsigned int y = m / hex;
	char c;

	if (x > 10)
		c = (x - 10) + alpha;
	else
		c = x + '0';
	if (y == 0)
	{
		return (_putchar(c));
	}
	if (y < hex)
	{
		if (y > 10)
			return (_putchar(b - 10 + alpha) + _putchar(c));
		return (_putchar(y + '0') + _putchar(c));
	}
	return (_hex_str(y, hex, alpha) + _putchar(c));
}

/**
 * _hex_l - printing lower case hexa
 * @hexa: argument recieved
 * Return: no of char printed
 */
int _hex_l(va_list hexa)
{
	return (_hex_str(va_arg(hexa, unsigned int), 16, 'x'));
}

/**
 * _hex_u - printing upper case hexa
 * @hexa: argument recieved
 * Return: no. of char printed
 */
int _hex_u(va_list hexa)
{
	return (_hex_str(va_arg(hexa, unsigned int), 16, 'X'));
}
