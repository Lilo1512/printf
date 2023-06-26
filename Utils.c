#include "main.h"

/**
 * its_printable - Evaluates if a char is printable
 * @ch: Char to be evaluated.
 * Return: 1 if c is printable, 0 otherwise
 */

int its_printable(char ch)
{
	if (ch >= 32 && ch < 127)
		return (1);

	return (0);
}

/**
 * append_hexa - Append ascci in hexadecimal code to buffer
 * @buffer: Array of chars.
 * @i: Index at which to start appending.
 * @ascii: ASSCI CODE.
 * Return: Always 3
 */

int append_hexa(char ascii, char buffer[], int i)
{
	char map[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii < 0)
		ascii *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map[ascii / 16];
	buffer[i] = map[ascii % 16];

	return (3);
}

/**
 * is_digit - Verifies if a char is a digit
 * @c: Char to be evaluated
 * Return: 1 if c is a digit, 0 otherwise
 */

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_num - Casts a number to the specified size
 * @num: Number to be casted.
 * @size: Number indicating the type to be casted.
 * Return: Casted value of num
 */

long int convert_size_num(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsigned - Casts a number to the specified size
 * @num: Number to be casted
 * @size: Number indicating the type to be casted
 * Return: Casted value of num
 */

long int convert_size_unsigned(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
