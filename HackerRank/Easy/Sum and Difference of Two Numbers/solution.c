// HackerRank Problem: Sum and Difference of Two Numbers
// Link: https://www.hackerrank.com/challenges/sum-numbers-c/problem
// Difficulty: Easy
// Language: c

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,m;
    float a, b;
    scanf("%d %d" , &n,&m);
    scanf("%f %f" , &a,&b);
    printf("%d %d\n", n+m, n-m);
    printf("%.1f %.1f\n" , a+b , a-b);
    
	
    
    return 0;
}
