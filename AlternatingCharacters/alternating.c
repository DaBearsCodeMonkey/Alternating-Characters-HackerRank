/*
Problem Statement

Shashank likes strings in which consecutive characters are different. For
example, he likes ABABA, while he doesn't like ABAA. Given a string containing
characters A and B only, he wants to change it into a string he likes. To do 
this, he is allowed to delete the characters in the string.

Your task is to find the minimum number of required deletions.

Input Format 
The first line contains an integer T i.e. the number of test cases. 
Next T lines contain a string each.

Output Format 
For each test case, print the minimum number of deletions required.

Constraints

1 ≤ T ≤ 10 
1 ≤ lengthofString ≤ 10^5 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 1000001

int main() 
{
    char **tests;
    int counter;
    int i;
    int j;
    int testCases;
    
    scanf(" %d", &testCases);
    
    tests = malloc(sizeof(char *) * testCases);
    
    for(i = 0; i < testCases; i++)
        tests[i] = malloc(MAX);
    
    //get input
    for(i = 0; i < testCases; i ++)
        scanf(" %s", tests[i]);
    
    for (i = 0; i < testCases; i++)
    {   
        counter = 0;
        
        for(j = 0; j < strlen(tests[i]); j++)
            if(tests[i][j] == tests[i][j+1])
                counter++;
     
        printf("%d\n", counter);
    }
    return 0;
}
