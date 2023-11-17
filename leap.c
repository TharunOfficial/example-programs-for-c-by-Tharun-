#include<stdio.h>
int main()
{
int n;
printf("enter a year to check leap or not");
scanf("%d",&n);
if(n%4==0)
{
printf("Its a leap year");
}
else
{
printf("Its not a leap year !!!");
}
return 0;
}
