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
int get_ch(va_list args, char buffer[],
		int flags, int width, int precision, int size);
int get_str(va_list args, char buffer[],
		int flags, int width, int precision, int size);
int get_percent(va_list args, char buffer[],
		int flags, int width, int precision, int size);
int get_intger(va_list args, char buffer[],
		int flags, int width, int precision, int size);
int get_binary(va_list args, char buffer[],
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

int get_ptr(va_list args, char buffer[],
		int flags, int width, int precision, int size);
int get_non_printable(va_list args, char buffer[],
		int flags, int width, int precision, int size);
int get_reverse(va_list args, char buffer[],
		int flags, int width, int precision, int size);
int get_rot13string(va_list args, char buffer[],
		int flags, int width, int precision, int size);
int gets_precisions(const char *format, int *x, va_list args);
int git_width(const char *format, int *x, va_list args);

int gets_sizes(const char *format, int *a);
int gits_flag(const char *format, int *a);
int handles_prints(const char *ami, int *ent, va_list lists, char buffer[],
		int flag, int widths, int precisions, int sizes);
int writes_pointers(char buffer[], int ent, int lengths,
		int widths, int flag, char bad, char extra_i, int bad_start);
int writes_unsgnd(int its_negative, int ent,
		char buffer[],
		int flag, int widths, int precisions, int sizes);
int writes_num1(int ent, char buffer[],
		int flag, int widths, int precisions,
		int lengths, char bad, char extra_i);
int writes_numbers(int its_negative, int ent, char buffer[],
		int flag, int widths, int precisions, int sizes);
int handles_writes_char(char i, char buffer[],
		int flag, int widths, int precisions, int sizes);
int its_printable(char ch);
int append_hexa(char ascii, char buffer[], int i);
int is_digit(char c);
long int convert_size_num(long int num, int size);
long int convert_size_unsigned(unsigned long int num, int size);

#endif
