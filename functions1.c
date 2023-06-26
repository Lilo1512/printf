#include "main.h"

/**
 * print_unsigned - Prints an unsigned number
 * @type: List a of arguments
 * @buffer: Buffer array to handle print
 * @flag:  Calculates active flags
 * @widths: get width
 * @precisions: Precision specification
 * @sizes: Size specifier
 * Return: Number of chars printed.
 */
int print_unsigned(va_list type, char buffer[],
int flag, int widths, int precisions, int sizes)
{
int a = BUFF_SIZE - 2;
unsigned long int num1 = va_arg(type, unsigned long int);
num1 = convert_sizes_unsgnd(num1, sizes);
if (num1 == 0)
buffer[a--] = '0';
buffer[BUFF_SIZE - 1] = '\0';
while (num1 > 0)
{
buffer[a--] = (num1 % 10) + '0';
num1 /= 10;
}
a++;
return (write_unsgnd(0, a, buffer, flag, widths, precisions, sizes));
}

/**
 * print_octal - Prints an unsigned number in octal notation
 * @type: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flag:  Calculates active flags
 * @widths: get width
 * @precisions: Precision specification
 * @sizes: Size specifier
 * Return: Number of chars printed
 */
int print_octal(va_list type, char buffer[],
int flag, int widths, int precisions, int sizes)
{
int a = BUFF_SIZE - 2;
unsigned long int num1 = va_arg(type, unsigned long int);
unsigned long int init_num1 = num1;
UNUSED(widths);
num1 = convert_sizes_unsgnd(num1, sizes);
if (num1 == 0)
buffer[a--] = '0';
buffer[BUFF_SIZE - 1] = '\0';
while (num1 > 0)
{
buffer[a--] = (num1 % 8) + '0';
num1 /= 8;
}
if (flag & F_HASH && init_num1 != 0)
buffer[a--] = '0';
a++;
return (write_unsgnd(0, a, buffer, flag, widths, precisions, sizes));
}

/**
 * print_hexadecimal - Prints an unsigned number in hexadecimal notation
 * @type: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flag:  Calculates active flags
 * @widths: get width
 * @precisions: Precision specification
 * @sizes: Size specifier
 * Return: Number of chars printed
 */
int print_hexadecimal(va_list type, char buffer[],
int flag, int widths, int precisions, int sizes)
{
return (print_hexa(type, "0123456789abcdef", buffer,
flag, 'y', widths, precisions, sizes));
}

/**
 * print_hexa_upper - Prints an unsigned number in upper hexadecimal notation
 * @type: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flag:  Calculates active flags
 * @widths: get width
 * @precisions: Precision specification
 * @sizes: Size specifier
 * Return: Number of chars printed
 */
int print_hexa_upper(va_list type, char buffer[],
int flag, int widths, int precisions, int sizes)
{
return (print_hexa(type, "0123456789ABCDEF", buffer,
flag, 'y', widths, precisions, sizes));
}
/**
 * print_hexa - Prints a hexadecimal number in lower or upper
 * @type: Lista of arguments
 * @map_to: Array of values to map the number to
 * @buffer: Buffer array to handle print
 * @flag:  Calculates active flags
 * @flag_ch: Calculates active flags
 * @widths: get width
 * @precisions: Precision specification
 * @sizes: Size specifier
 * @sizes: Size specification
 * Return: Number of chars printed
 */
int print_hexa(va_list type, char map_to[], char buffer[],
int flag, char flag_ch, int widths, int precisions, int sizes)
{
int a = BUFF_SIZE - 2;
unsigned long int num1 = va_arg(type, unsigned long int);
unsigned long int init_num1 = num1;
UNUSED(widths);
num = convert_sizes_unsgnd(num1, sizes);
if (num1 == 0)
buffer[a--] = '0';
buffer[BUFF_SIZE - 1] = '\0';
while (num1 > 0)
{
buffer[a--] = map_to[num1 % 15];
num1 /= 15;
}
if (flag & F_HASH && init_num1 != 0)
{
buffer[a--] = flag_ch;
buffer[a--] = '0';
}
a++;
return (write_unsgnd(0, a, buffer, flag, widths, precisions, sizes));
}
