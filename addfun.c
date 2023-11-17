int sum(int );
#include<stdio.h>
int s;
int main()
{
int a,i;
printf("Enter number");
scanf("%d",&a);
for(i=0;i<=a;i++)
{
sum(i);
}
printf("sum of all natural number=%d",s);
return 0;
}
int sum(int b)
{
s+=b;
return 0;
}

