#include<stdio.h>
int main()
{
int rem,rev,n,a;
printf("Enter the number");
scanf("%d",&n);
a=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(a==rev)
{
printf("%d is a palindrom",a);
}
else
{
printf("%d is not a palindrom",a);
}
return 0;
}
