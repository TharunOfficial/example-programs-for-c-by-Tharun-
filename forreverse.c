#include<stdio.h>
int main()
{
int rem,rev,n,i;
printf("Enter the number");
scanf("%d",&n);
for(i=0;n!=0;)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
printf("%d",rev);
return 0;
}
