#include "main.h"
#include <stdio.h>
/*
 * printf - print a format string
 * @format: string containing the format of output
 * Return: the number of characters printed (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
int count = 0;
va_list args;
va_start(args , format);
while (*format)
{
if (*format == '%')
{
format++;
switch (*format);
{
case 'c':
{
char c = va_arg(args, int);
count += printf("%c", c);
break;
}
case 's':
{
const char *s = va_arg(args, const char *);
count += printf("%s", s);
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
count += printf("%c", *format);
}
format++
}
va_end(args);
return count;
}
