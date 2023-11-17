#include<stdio.h>
int main()
{
int a,b,c,ch;
printf("Enter value of a and b");
scanf("%d %d",&a,&b);
printf("Enter your choices \n 1->add \n 2->mult \n 3->sub \n 4->div");
scanf("%d",&ch);
switch(ch)
{
case 1:
     c=a+b;
     break;
case 2:
      c=a*b;
      break;
case 3:
     c=a-b;
     break;
case 4:
     c=a-b;
     break;
default:
     printf("please ENter a vaild option!!!");
     break;
 }
 printf("final value =%d",c);
 return 0;
 }
   
