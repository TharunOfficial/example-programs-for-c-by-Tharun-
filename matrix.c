/* program to add two matrix*/
#include<stdio.h>
int main()
{
int a[3][3],i,j;
int b[3][3],c[3][3];
printf("enter first matrix");
// loop for input of matrix 1
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter second matrix");
// loop for input of matrix 2
for(i=0;i<3; i++)
{
for(j=0;j<3;j++)
{10-
scanf("%d",&b[i][j]);
}
} 
// loop for addition
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
// loop for output of matrix
for(i=0;i<3;i++)
{
printf("|");
for(j=0;j<3;j++)
{
printf("%d  ",c[i][j]);
}
printf("|");
printf("\n");
}

return 0;
}

