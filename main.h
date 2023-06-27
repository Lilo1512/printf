#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct fmt - function to check for formats
 * @type: The format to print
 * @f: The print function to use
 */

typedef struct fmt
{
<<<<<<< HEAD
	char *type;
	int (*f)();
} fmt_t;
=======
	char ami;
	int (*fn)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct fmt fmt_t - Struct op
 * @ami: The format.
 * @fm_t: The function associated.
 */

typedef struct ami ami_t;



int _printf(const char *format, ...);

>>>>>>> 11e7ffa224a470f02b516321b0dafdb9177ae5fc

int _printf(const char *format, ...);
int print_op(const char *format, fmt_t *print_arr, va_list list);
int ch(va_list character);
int str(va_list string);
int _int(va_list integ);
int _ui(va_list unsign);
int _oct(va_list octo);
int _rot13(va_list rot);
int _hex_str(unsigned int n, unsigned int hex, char alpha);
int _hex_l(va_list hexa);
int _hex_u(va_list hexa);
int _strlen(char *s);
int _bin(va_list bin);
int _putchar(char c);

#endif
