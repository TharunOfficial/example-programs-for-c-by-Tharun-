#include<stdio.h>
int main()
{
int i,j,n=1;
for(i=1;i<=11;i++)
{
for(j=1;j<=i;j++)
{
printf("%d\t",n);
n++;
}
printf("\n");
}
return 0;
}
