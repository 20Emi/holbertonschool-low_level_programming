#ifndef _calc_h_
#define _calc_h_

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int (*get_op_func(char *s))(int, int);
	/*sum*/
int op_add(int a, int b);
	/*difference*/
int op_sub(int a, int b);
	/*product*/
int op_mul(int a, int b);
	/*division*/
int op_div(int a, int b);
	/*remainder of the division*/
int op_mod(int a, int b);

#endif
