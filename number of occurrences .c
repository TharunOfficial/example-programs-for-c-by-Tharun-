#include<stdio.h>
int main()
{ 
int i,j,c,n[1],n1[100],l;
printf("Enter the No. of Integers");
scanf("%d",&l);
printf("enter the digit");
scanf("%d",&n[0]);
printf("enter any number to check digit is present or not");
for(i=0;i<l;i++)
{
scanf("%d",&n1[i]);
}
for(i=0;i<l;i++)
{
if(n1[i]==n[0])
{
c++;
}
}
printf("%d repeated %d times",n[0],c);
return 0;
}

