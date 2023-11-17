#include<stdio.h>
int main()
{
int a[5][5][5],b[5][5][5],c[5][5][5],i,j,k;
printf("enter the matrix 1");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
for(k=0;k<2;k++)
{
scanf("%d",&a[i][j][k]);
}
}
}
printf("enter the matrix 2");

for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
for(k=0;k<2;k++)
{
scanf("%d",&b[i][j][k]);
}
}
}


for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
for(k=0;k<2;k++)
{
c[i][j][k]=a[i][j][k]+b[i][j][k];
}
}
}

for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("|");
for(k=0;k<2;k++)
{
printf("%d\t",c[i][j][k]);
}
printf("|\n");
}
}
return 0;
}



