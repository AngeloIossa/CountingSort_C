#include <stdio.h>
#include <stdlib.h>
#include "countingsort.h"

/*
 *  Print array function 
*/
void print_array (int *array, int lenght)
{
    int i;
    printf("Array: ");
    for (i = 0; i < lenght; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}