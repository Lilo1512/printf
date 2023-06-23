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

#endif
