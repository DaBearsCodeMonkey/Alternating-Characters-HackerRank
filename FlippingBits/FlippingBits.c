/*Problem Statement

You will be given a list of 32-bits unsigned integers. You are required to
 output the list of the unsigned integers you get by flipping bits in its binary
 representation (i.e. unset bits must be set, and set bits must be unset).

Input Format

The first line of the input contains the list size T. T lines follow each line
having an integer from the list.

Constraints

1 ≤ T ≤ 100

Output Format

Output one line per element from the list with the requested result.*/


#include <stdio.h>
#include <stdlib.h>

int main() 
{
    unsigned *arr;
    int arr_size;
    int i;   
    
    scanf("%d", &arr_size);
    arr = (int*)malloc(arr_size * sizeof(int));
    
    for(i = 0; i < arr_size; i++)
        scanf("%u", &arr[i]);
    
    for(i = 0; i < arr_size; i++)
        printf("%u\n", 0xffffffff ^ arr[i]);
   
    return 0;
}