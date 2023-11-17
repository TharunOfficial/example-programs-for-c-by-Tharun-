#include<stdio.h>
int swap(int,int);
int main()
{
int a,b;
printf("Enter 2 numbers to swap");
scanf("%d %d",&a,&b);
swap(a,b);
return 0;
}
int swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
printf("a=%d b=%d",a,b);
return 0;
}

