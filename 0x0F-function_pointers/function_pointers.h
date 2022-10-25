#ifndef function_pointers_h
#define function_pointers_h

/**
 * Function_pointers - This is my header file for this project
 *
 * Description: Header file containing the prototypes
 * for all of the functions for project 0x10. C - Function pointers
 */

/* PROTOTYPES */

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
