#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of a and b
 * @a: 1st number
 * @b: 2nd number
 *
 * Return the sum of a and b
 */
int op_add(int a, int b)
{
  return (a + b);
}

/**
 * op_sub -  returns the difference of a and b
 * @a: 1st number
 * @b: 2nd number
 *
 * Return the difference between a and b
 */
int op_sub(int a, int b)
{
  return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: 1st number
 * @b: 2nd number 
 *
 * Return the prodeuct of a and b
 */
int op_mul(int a, int b)
{
  return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: numerator
 * @b: denominator
 *
 * Return the division of a by b
 */
int op_div(int a, int b)
{
  return (a / b);
}

/**
 * op_mod: returns the remainder of the division of a by b
 * @a: number to be divided
 * @b: divisor
 *
 * Return the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
  return (a % b);
}
