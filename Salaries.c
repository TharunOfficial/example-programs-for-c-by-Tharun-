#include<stdio.h>
int main()
{
int s,c;
printf("Enter salary");
scanf("%d",&s);
while(s!=0)  
{  
s=s/10;  
c++;  
} 
if(c<=1)
{
printf("Insufficient Earning");
}
else if(c==2)
{
printf("Very Low Earning");
}
else if(c==3)
{
printf("Low Earning");
}
else if(c==4)
{
printf("Sufficient Earning");
}
else if(c>=5)
{
printf("High Earning");
}
return 0;
}

