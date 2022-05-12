#include "variadic_functions.h"
/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */

int sum_them_all(int args, ...)
{
va_list ap;
va_start(ap,args);
int i = 0;sum = 0;
for (i = 0; i < args; i++)
{
sum += va_args(ap,int);
}
va_end(ap);
return sum;
}
