#include<stdio.h>
void main()
{
    int A[2][2] , B[2][2] , i , j , C[2][2];
    printf("Enter the values of the matrix of A");

    for(i=0 ; i<2 ; i++)
        for(j=0 ; j<2; j++)
        scanf("%d" , &A[i][j]);

    printf("Enter the values of matrix B");
     for(i=0 ; i<2 ; i++)
        for(j=0 ; j<2; j++)
        scanf("%d" , &B[i][j]);

        for(i=0 ; i<2 ; i++)
            for(j=0 ; j<2 ; j++)
            C[i][j]=A[i][j]+B[i][j];

        printf("Addition = \n");

        for(i=0 ; i<2 ; i++)
        {

            for(j=0 ; j<2 ; j++)
                printf("%d\t" , C[i][j]);
            printf("\n");

        }


}

