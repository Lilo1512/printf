#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdio.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);

void print_buffer(char buffer[], int *buff_ind);
=======
int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_int(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_unsigned(va_list type, char buffer[],
		int flag, int widths, int precisions, int sizes);
int print_octal(va_list type, char buffer[],
		int flag, int widths, int precisions, int sizes);
int print_hexadecimal(va_list type, char buffer[],
		int flag, int widths, int precisions, int sizes);
int print_hexa_upper(va_list type, char buffer[],
		int flag, int widths, int precisions, int sizes);
int print_hexa(va_list type, char map_to[], char buffer[],
		int flag, char flag_ch, int widths, int precisions, int sizes);
int gets_sizes(const char *format, int *a);
int gits_flag(const char *format, int *a);
#endif
