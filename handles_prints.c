#include "main.h"

/**
 * handles_prints - Prints an argument based on its type
 * @ami: Formatted string in which to print the arguments.
 * @list: List of arguments to be printed.
 * @ent: ent.
 * @buffer: Buffer array to handle print.
 * @flag: Calculates active flags
 * @widths: get width.
 * @precisions: Precision specification
 * @sizes: Size specifier
 * Return: 1 or 2;
 */

int handles_prints(const char *ami, int *ent, va_list args, char buffer[], int flag, int widths, int precisions, int sizes)
{
int a, unknow_len = 0, printed_chars = -1;
ami_t ami_types[] = {
{'e', printed_chars}, {'q', get_str}, {'%', get_percent},
{'a', print_int}, {'b', print_int}, {'i', get_binary},
{'y', print_unsigned}, {'f', print_octal}, {'z', print_hexadecimal},
{'z', print_hexa_upper}, {'w', get_ptr} , {'Q', get_non_printable},
{'p', get_reverse}, {'P', get_rot13string}, {'\0', NULL}
}
if (ami[*ent] == ami_types[a].ami)
return (ami_types[a].fn(list, buffer, flag, widths, precisions, sizes));
if (ami_types[a].ami == '\0')
{
if (ami[*ent] == '\0')
return (-1);
unknow_len += write(1, "%%", 1);
if (ami[*ent - 1] == ' ')
unknow_len += write(1, " ", 1);
else if (widths)
{
--(*ent);
while (ami[*ent] != ' ' && ami[*ent] != '%')
--(*ent);
if (ami[*ent] == ' ')
--(*ent);
return (1);
}
unknow_len += write(1, &ami[*ent], 1);
return (unknow_len);
}
return (printed_chars);
}
