/*lina knows the age of her daughter only in terms of days help her to find in terms of years months and weeks
LOGIC year=day/365
month=days/30
week=(day%365)/7*/
#include<stdio.h>
int main()
{
int d,w,m,y;
printf("Enter the days");
scanf("%d",&d);
y=d/365;
m=d/30;
w=m*4;
printf("years=%d months=%d weeks=%d",y,m,w);
return 0;
}

