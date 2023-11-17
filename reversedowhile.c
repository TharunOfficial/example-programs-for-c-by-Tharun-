#include<stdio.h>
int main()
{
int rem,rev,n;
printf("Enter the number");
scanf("%d",&n);
do
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}while(n!=0);
printf("%d",rev);
return 0;
}
