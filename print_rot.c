#include "main.h"

/**
 * _rot13 - prints rot13 version
 * @rot: list being passed
 * Return: count of chars
 */
int _rot13(va_list rot)
{
	int x, counts;
	char *s;

	x = counts = 0;
	s = va_arg(rot, char *);

	if (s == NULL)
		return (-1);
	while (s[x] != '\0')
	{
		if ((s[x] >= 'x' && s[x] <= 'z') ||
		    (s[x] >= 'X' && s[x] <= 'Z'))
		{
			if ((s[x] >= 'm' && s[x] <= 'z') ||
			    (s[x] >= 'M' && s[x] <= 'Z'))
				counts = counts + _putchar(s[x] - 13);
			else
				counts = counts + _putchar(s[x] + 13);
		}
		else
			counts = counts + _putchar(s[x]);
		x++;
	}
	return (counts);
}
