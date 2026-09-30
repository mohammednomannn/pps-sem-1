//write a c program to find the area and circumference of a circle
#include<stdio.h>
#include<conio.h>
void main()
{
    float r,C,A;
    printf("enter the radius\n");
    scanf("%f");
    A=3.14*r*r;
    C=2*3.14*r;
    printf("the area of circle=%f\n",A);
    printf("the circumference of circle is=%f",C);
}
