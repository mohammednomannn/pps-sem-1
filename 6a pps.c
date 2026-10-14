#include<stdio.h>
int sum(int n );
int main()
{
    int n,s;
    printf("enter your number");
    scanf("%d" , &n);
    s=sum(n);
   printf("%d",s);
    return 0;
}
int sum(int n)
{
    if (n==0 || n==1){
        return 1;
    }

    else
        return n+sum(n-1);
}
