#ifndef variadic_functions_h
#define variadic_functions_h

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
* variadic_functions_h - this is my header file for this project
*
* Description - Header file contaning the prototypes
* for all the functions for this project
*/

/* PROTOTYPES */

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
