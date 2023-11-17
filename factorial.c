#include<stdio.h>
int main()
{
int f=1,i,n;
printf("Enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("factorial=%d",f);
return 0;
}

