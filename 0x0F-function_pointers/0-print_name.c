#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: name to be printed
 * @f: pointer to the printing func
 */
void print_name(char *name, void (*f)(char *)){
(*f)(name);
}
