#include<stdio.h>
int main()
{
int a;
printf("Enter a number to check ");
scanf("%d",&a);
if((a%2==0)&&(a%1==0))
{
printf("NOt prime ");
}
else if(a%a==0)
{
printf("Its a prime number");
}
return 0;
}

