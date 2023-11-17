#include<stdio.h>
int main()
{
int a,b,temp;
printf("Enter value of a and b");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("swapped a=%d and b=%d",a,b);
return 0;
}

