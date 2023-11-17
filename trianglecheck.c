#include<stdio.h>
int main()
{
int s1,s2,s3,s;
printf("Enter side 1");
scanf("%d",&s1);
printf("Enter side 2");
scanf("%d",&s2);
printf("Enter side 3");
scanf("%d",&s3);
if ((s1>s2)&&(s1>s3))
{
s=s2+s3;
if(s>s1)
{
printf("It is a triangle");
}
}

else if ((s2>s1)&&(s2>s3))
{
s=s1+s3;
if(s>s2)
{
printf("It is a triangle");
}
}

else if ((s3>s1)&&(s3>s2))
{
s=s2+s1;
if(s>s3)
{
printf("It is a triangle");
}
}

else 
{
printf("Its not a triangle");
}
return 0;
}

