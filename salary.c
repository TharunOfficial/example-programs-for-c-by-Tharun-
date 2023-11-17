#include<stdio.h>
int main()
{
int r,s,g,b,d;
printf("Enter the salary");
scanf("%d",&r);
b=r*12/100;
d=r*18/100;
g=r+b+d;
printf("grosspay= %d\nHRA=%d\nDA=%d\n",g,b,d);
return 0;
}

