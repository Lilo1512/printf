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
		if ((s[x] >= 'x' && s[a] <= 'z') ||
		    (s[a] >= 'X' && s[a] <= 'Z'))
		{
			if ((s[a] >= 'm' && s[a] <= 'z') ||
			    (s[a] >= 'M' && s[a] <= 'Z'))
				counts = counts + _putchar(s[a] - 13);
			else
				counts = counts + _putchar(s[a] + 13);
		}
		else
			counts = counts + _putchar(s[a]);
		x++;
	}
	return (counts);
}
