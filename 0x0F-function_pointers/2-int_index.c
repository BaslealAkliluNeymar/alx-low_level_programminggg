#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - prints the index of the number in the array
 * Return: Always(0) Success
 */

int int_index(int *array, int size, int (*cmp)(int)){
int  i = 0;
if(cmp && array){
for (i = 0;i < size ; i++){
if((*cmp)(array[i]) != 0){
return (i);
}
}
}
return -1;
}
