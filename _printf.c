#include "main.h"
#include <stdio.h>

/*
 * _printf - print a format string
 * @format: string containing the format of output
 * Return: the number of characters printed
 * excluding the null byte used to end output to strings
 */

int _printf(const char *format, ...)
{
int count = 0;
va_list args;
va_start(args, format);
for (char *c = format; *c; c++)
{
if (*c == '%')
{
switch (*c++)
{
case 'c':
{
char ch = va_arg(args, int);
count += printf("%c", ch);
break;
}
case 's':
{
char *str = va_arg(args, char *);
count += printf("%s", str);
break;
}
case '%':
{
count += printf("%%");
break;
}
default:
{
break;
}
}
}
else
{
count += printf("%c", *c);
}
}
va_end(args);
return (count);
}
