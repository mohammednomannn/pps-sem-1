#include<stdio.h>
int main()
{
int a,b;
printf("enter your number");
scanf("%d%d",&a,&b);

printf("the bitwise for AND (a&b) is %d\n",a&b);
printf("the bitwise for OR (a|b) is %d\n",a|b);
printf("the bitwise for left shift (a<<b) is %d\n",a<<b);
printf("the bitwise for right shift (a>>b) is %d\n",a>>b);
return 0;

}
