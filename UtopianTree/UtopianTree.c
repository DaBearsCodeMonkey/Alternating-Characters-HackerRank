/*Problem Statement

The Utopian tree goes through 2 cycles of growth every year. The first growth
cycle occurs during the spring, when it doubles in height. The second growth
cycle occurs during the summer, when its height increases by 1 meter. Now, a new
Utopian tree sapling is planted at the onset of the spring. Its height is 1 
meter. Can you find the height of the tree after N growth cycles?

Input Format 
The first line contains an integer, T, the number of test cases. 
T lines follow. Each line contains an integer, N, that denotes the number of
cycles for that test case.

Constraints 
1 <= T <= 10 
0 <= N <= 60

Output Format 
For each test case, print the height of the Utopian tree after N cycles.
*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int testCases;
    int *cycles;
    int *height;
    int i;
    int j;
    
    scanf(" %d", &testCases);
    //allocating some space for my beautiful variables
    cycles = (int *)malloc(testCases * sizeof(int));
    height = (int *)malloc(testCases * sizeof(int));
    
    //get cycles input and for efficiency.. set each height element to 1
    for(i = 0; i < testCases; i++)
    {
        scanf(" %d", &cycles[i]);
        height[i] = 1;
    }    
    //lets do a little math
    for(i = 0; i < testCases; i++)
        for(j = 0; j < cycles[i]; j++)
        {
            if(j % 2 == 0)
                height[i] *= 2;
            else
                height[i]++;
        }
    
    for(i = 0; i < testCases; i++)
        printf("%d\n", height[i]);
    
    return 0;
}