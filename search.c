/* to read 10 int from user and search element 55 present in a array*/
#include<stdio.h>
int main()
{
int a[100],i,n;
printf("Enter numbers");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the number to check");
scanf("%d",&n);
for(i=0;i<10;i++)
{
if(n==a[i])
{
printf("%d in list",n);
break;
}
}
if(a[i]!=n)
{
printf("%d not  in list",n);
}
return 0;
}

