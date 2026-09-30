#include<stdio.h>
int main ()
{
int marks;
printf("enter marks;");
scanf("%d",&marks);
if(marks>=90)
{
printf("gradeA");
}
else if (marks>=75)
{
printf("grade B");
}
else if(marks>=60)
{
printf("gradeC");
}
else if(marks>=40)
{
printf("gradeD");
}
 else
{
printf("fail");
}
return 0;
}
