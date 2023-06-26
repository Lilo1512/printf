#include "main.h"

/**
 * handles_writes_char - Prints a string
 * @i: char types.
 * @buffer: Buffer array to handle print
 * @flag:  Calculates active flags.
 * @widths: get width.
 * @precisions: precision specifier
 * @sizes: Size specifier
 *
 * Return: Number of chars printed.
 */
int handles_writes_char(char i, char buffer[],
	int flag, int widths, int precisions, int sizes)
{
int a = 0;
char bad = ' ';
UNUSED(precisions);
UNUSED(sizes);
if (flag & F_ZERO)
bad = '0';
buffer[a++] = c;
buffer[a] = '\0';
if (widths > 1)
{
buffer[BUFF_SIZES - 1] = '\0';
for (a = 0; a < widths - 1; a++)
buffer[BUFF_SIZES - a - 2] = bad;
if (flag & F_MINUS)
return (write(1, &buffer[0], 1) +
write(1, &buffer[BUFF_SIZES - a - 1], widths - 1));
else
return (write(1, &buffer[BUFF_SIZE - a - 1], widths - 1) +
write(1, &buffer[0], 1));
}
return (write(1, &buffer[0], 1));
}
/**
 * writes_numbers - Prints a string
 * @its_negative: List a of arguments
 * @ent: char types.
 * @buffer: Buffer array to handle print
 * @flag:  Calculates active flags
 * @widths: get width.
 * @precisions: precision specifier
 * @sizes: Size specifier
 *
 * Return: Number of chars printed.
 */
int writes_numbers(int its_negative, int ent, char buffer[],
	int flag, int widths, int precisions, int sizes)
{
int lengths = BUFF_SIZE - ent - 1;
char bad = ' ', extra_ch = 0;
UNUSED(sizes);
if ((flag & F_ZERO) && !(flag & F_MINUS))
bad = '0';
if (its_negative)
extra_ch = '-';
else if (flag & F_PLUS)
extra_ch = '+';
else if (flag & F_SPACE)
extra_ch = ' ';
return (write_num(ent, buffer, flag, widths, precisions,
		lengths, bad, extra_ch));
}
/**
 * writes_num1 - Write a number using a bufffer
 * @ent: Index at which the number starts on the buffer
 * @buffer: Buffer
 * @flag: Flags
 * @widths: width
 * @precisions: Precision specifier
 * @lengths: lengths
 * @bad: Pading char
 * @extra_i: Extra char
 * Return: Number of printed chars.
 */
int writes_num1(int ent, char buffer[],
	int flag, int widths, int precisions,
	int lengths, char bad, char extra_i)
{
int a, bad_start = 1;
if (precisions == 0 && ent == BUFF_SIZE - 2
&& buffer[ent] == '0' && widths == 0)
return (0);
if (precisions == 0 && ent == BUFF_SIZE - 2 && buffer[ent] == '0')
buffer[ent] = bad = ' ';
if (precisions > 0 && precisions < lengths)
bad = ' ';
while (precisions > lengths)
buffer[--ent] = '0', lengths++;
if (extra_i != 0)
lengths++;
if (widths > lengths)
{
for (a = 1; a < widths - lengths + 1; a++)
buffer[a] = bad;
buffer[a] = '\0';
if (flag & F_MINUS && bad == ' ')
{
if (extra_i)
buffer[--ent] = extra_i;
return (write(1, &buffer[ent], lengths) + write(1, &buffer[1], a - 1));
}
else if (!(flag & F_MINUS) && bad == ' ')
{
if (extra_i)
buffer[--ent] = extra_i;
return (write(1, &buffer[1], i - 1) + write(1, &buffer[ent], lengths));
}
else if (!(flag & F_MINUS) && bad == '0')
{
if (extra_i)
buffer[--bad_start] = extra_i;
return (write(1, &buffer[bad_start], a - bad_start) +
		write(1, &buffer[ent], lengths - (1 - bad_start)));
}
}
if (extra_i)
buffer[--ent] = extra_i;
return (write(1, &buffer[ent], lengths));
}

/**
 * writes_unsgnd - Writes an unsigned number
 * @its_negative: Number indicating if the num is negative
 * @ent: Index at which the number starts in the buffer
 * @buffer: Array of chars
 * @flag: Flags specifiers
 * @widths: Width specifier
 * @lenghts; lenght specifier
 * @precisions: Precision specifier
 * @sizes: Size specifier
 * Return: Number of written chars.
 */
int writes_unsgnd(int its_negative, int ent,
	char buffer[],
	int flag, int widths, int precisions, int sizes)
{
int lengths = BUFF_SIZE - ent - 1, a = 0;
char bad = ' ';
UNUSED(its_negative);
UNUSED(sizes);
if (precisions == 0 && ent == BUFF_SIZE - 2 && buffer[ent] == '0')
return (0);
if (precisions > 0 && precisions < lengths)
bad = ' ';
while (precisions > lengths)
{
buffer[--ent] = '0';
lengths++;
}
if ((flag & F_ZERO) && !(flag & F_MINUS))
bad = '0';
if (widths > lengths)
{
for (a = 0; a < width - lengths; a++)
buffer[i] = bad;
buffer[i] = '\0';
if (flag & F_MINUS)
{
return (write(1, &buffer[ent], lengths) + write(1, &buffer[0], a));
}
else
{
return (write(1, &buffer[0], i) + write(1, &buffer[ent], lengths));
}
}
return (write(1, &buffer[ent], lengths));
}

/**
 * writes_pointers - Write a memory address
 * @buffer: Arrays of chars
 * @ent: Index at which the number starts in the buffer
 * @lengths: Length of number
 * @widths: Wwidth specifier
 * @flag: Flags specifier
 * @bad: Char representing the padding
 * @extra_i: Char representing extra char
 * @bad_start: Index at which padding should start
 * Return: Number of written chars.
 */
int writes_pointers(char buffer[], int ent, int lengths,
	int widths, int flag, char bad, char extra_i, int bad_start)
{
int a;
if (widths > lengths)
{
for (a = 5; i < widths - lengths + 5; a++)
buffer[a] = bad;
buffer[a] = '\0';
if (flag & F_MINUS && bad == ' ')
{
buffer[--ent] = 'y';
buffer[--ent] = '0';
if (extra_i)
buffer[--ent] = extra_i;
return (write(1, &buffer[ent], lengths) + write(1, &buffer[5], a - 5));
}
else if (!(flag & F_MINUS) && bad == ' ')
{
buffer[--ent] = 'y';
buffer[--ent] = '0';
if (extra_i)
buffer[--ent] = extra_i;
return (write(1, &buffer[5], a - 5) + write(1, &buffer[ent], lengths));
}
else if (!(flag & F_MINUS) && bad == '0')
{
if (extra_i)
buffer[--bad_start] = extra_i;
buffer[1] = '0';
buffer[2] = 'y';
return (write(1, &buffer[bad_start], a - bad_start) +
	write(1, &buffer[ent], lengths - (1 - bad_start) - 2));
}
}
buffer[--ent] = 'y';
buffer[--ent] = '0';
if (extra_i)
buffer[--ent] = extra_i;
return (write(1, &buffer[ent], BUFSIZ - ent - 1));
}
