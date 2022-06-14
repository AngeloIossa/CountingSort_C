#include <stdio.h>
#include <stdlib.h>
#include "countingsort.h"

int main(int argc, char const *argv[])
{
    int array[LENGHT]={3,6,4,1,3,4,1,4};
    const int k = 6;  // Range of elements
    int o_array[k]={0};
    print_array(array, LENGHT);

    occurences(array, o_array);
    print_array(o_array, k);


    
    return 0;
}

