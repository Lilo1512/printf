#include "main.h"

/**
 * handles_prints - Prints an argument based on its type
 * @ami: Formatted string in which to print the arguments.
 * @args: List of arguments to be printed.
 * @ent: ent.
 * @buffer: Buffer array to handle print.
 * @flag: Calculates active flags
 * @widths: get width.
 * @precisions: Precision specification
 * @sizes: Size specifier
 * Return: 1 or 2;
 */

int handles_prints(const char *ami, int *ent, va_list args, char buffer[],
		int flag, int widths, int precisions, int sizes)
{
int a, unknow_len = 0, printed_chars = -1;
<<<<<<< HEAD
if (ami[*ent] == ami_types[a:wq].ami)
=======
if (ami[*ent] == ami_types[a].ami)
>>>>>>> 5e503b1ffe2f1b1d56c8f8c9b201ee0673e2c802
return (ami_types[a].fn(args, buffer, flag, widths, precisions, sizes));
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
