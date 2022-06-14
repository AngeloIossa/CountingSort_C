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

/*
 *  Occurrences function
 *  Find the total frequency/occurrences of each element and 
    store the count at ith index in count array. 
*/
void occurences (int *array, int *o_array)
{
    int i;
    for (i = 0; i < LENGHT; i++)
    {
        o_array[array[i]-1]++;
    }
}