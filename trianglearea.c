#include<stdio.h>
int area(int,int);
int main()
{
int b,h,c;
printf("enter breath and height");
scanf("%d %d",&b,&h);
c=area(b,h);
printf("area of triangle=%d",c);
return 0;
}
int area(int b,int h)
{
int c;
c=0.5*b*h;
return c;
}
