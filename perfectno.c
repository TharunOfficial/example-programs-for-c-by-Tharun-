#include<stdio.h>
int main()
{
int n,r,i,s;
printf("enter number "); 
scanf("%d",&n);
for(i=1;i<n;i++)
{
r=n%i;
if(r==0)
{
s=s+i;
}
}
if(s==n)
{
printf("Its a perfect number");
}
else 
{
printf("ITs not a perfect number");
}
return 0;
}
