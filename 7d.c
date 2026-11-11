#include<stdio.h>
void main()
{
    int a [2][2]  , t[2][2] , i , j;
printf("Enter the values of matrix A");
for(i=0 ; i<2 ; i++)
    for(j=0 ; j<2 ; j++)
    scanf("%d" , &a[i][j]);
for(i=0 ; i<2 ; i++)
    for(j=0 ; j<2 ; j++)
        t[j][i]=a[i][j];
        printf("Transpose of matrix a is");

        for(i=0 ; i<2 ; i++)
    for(j=0 ; j<2 ; j++)
         printf("%d\t" , t[i][j]);
            printf("\n");

}
