    #include<stdio.h>
    #include<math.h>
    void main()
    {
    float a , b ,c , sum , r1 , r2;
    printf("enter the values of a , b , c : \n");
    scanf("%f  %f  %f" , &a , &b ,&c);
    sum= (b*b- 4*a*c);
    if ( sum<0)
    {
    printf("the roots are imaginary");
    }
     else if (" sum==0"){
    r1=-b/(2*a);
    printf("the root is real and equal %f",r1);
     }
    else if ( sum>0) {
    r1=(-b+sqrt(sum)/2*a);
    r2=(-b-sqrt(sum)/2*a);
    printf(" the roots are real %f  %f ",r1,r2);
}





}





