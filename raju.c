/* raju bug stationary items from shop help him to pay the total amount */
#include<stdio.h>
int main()
{
int i,p[100],q,s;
printf("Enter total no. of items");
scanf("%d",&q);
for(i=0;i<q;i++)
{
printf("enter price of items %d\n",i+1);
scanf("%d",&p[i]);
s=s+p[i];
}
for(i=0;i<q;i++)
{
printf("\nprice of item %d=%d",i+1,p[i]);
}
printf("\ntotal price =%d",s);
return 0;
}


