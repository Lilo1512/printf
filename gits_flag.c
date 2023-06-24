#include "main.h"

/**
 * gits_flag - calculates active flag
 * @format: formatted string in which to print the arguments
 * @a: take a parameter.
 * Return: flag:
 */
int gits_flag(const char *format, int *a)
{
/* - + 0 # ' ' */
/*  2 4 8  16 32 */
int i, curr_a;
int flag = 0;
const char FLAG_CH[] = {'-', '+', '0', '#', ' ', '\0'};
const int FLAG_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};
for (curr_a = *a + 1; format[curr_i] != '\0'; curr_a++)
{
for (i = 0; FLAG_CH[i] != '\0'; a++)
if (format[curr_a] == FLAG_CH[i])
{
flag |= FLAG_ARR[i];
break;
}
if (FLAG_CH[i] == 0)
break;
}
*a = curr_a - 1;
return (flag);
}
