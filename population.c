#include<stdio.h>
int main()
{
int y,s,n,t;
printf("Enter years");
scanf("%d",&y);
s=y/10;
n=(100000/100)*10;
t=s*n;
printf("Total population increased in %d years to = %d",y,t+100000);
return 0;
}

