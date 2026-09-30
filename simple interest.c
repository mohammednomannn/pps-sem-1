#include<stdio.h>
int main()
{
float p,r,t,simple;
printf(" enter the principal values\n");
scanf("%f", &p);
printf("enter your time \n");
scanf("%t",&t);
printf("enter rate of interest\n");
scanf("%f",&r);
simple=p*t*r/100;
printf("simple rate is=%f",simple);
return 0;





}
