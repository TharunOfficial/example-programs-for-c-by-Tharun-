/*write a c program to print the elements in reverse of array*/
#include<stdio.h>
int main()
{
int a[10];
int i;
printf("Enter input elements");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=9;i>=0;i--)
{
printf("%d",a[i]);
}
return 0;
}
