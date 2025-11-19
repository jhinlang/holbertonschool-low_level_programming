#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct op - is the entry point of the definition of parameters of the opera
 * @op: the operator
 * @f: the function associated with the operator
 */

typedef struct op
{
	char *op;
	int (*f)(int, int);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */

