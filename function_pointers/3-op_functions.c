#include<stdio.h>
#include "3-calc.h"
/**
 * op_add - return the sum of 'a' and 'b'
 * @b: number 
 * @a: number
 */
int op_add(int a, int b);
{
	return (a + b); /*returns the result*/
}
/**
 * op_sub - return the difference of 'a' and 'b'
 * @b: number
 * @a: number
 */
int op_sub(int a, int b)
{
	return(a - b);
}
/**
 * op_mul - return the product of 'a' and 'b'
 * @b: number
 * @a: number
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - return the division of 'a' and 'b'
 * @b: number
 * @a: number
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - return the remainder of 'a' and 'b'
 * @b: number
 * @a: number
 */
int op_mod(int a, int b)
{
	return ( a % b);
}
