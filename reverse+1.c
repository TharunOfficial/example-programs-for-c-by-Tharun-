#include<stdio.h>
int main()
{
int rem,rev,n;
printf("Enter the number");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
rev=(rev*10+rem)+1;
n=n/10;
}
printf("%d",rev);
return 0;
}
