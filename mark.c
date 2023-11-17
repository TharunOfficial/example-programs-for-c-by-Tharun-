#include<stdio.h>
int main()
{
int f,c;
printf ("Enter class");
scanf("%d",&c);
printf ("Enter no.of subjects failed");
scanf("%d",&f);
if((c==1))
{
if((c==1)&&(f>3))
{
printf("you do not get grace marks");
}
else
{
printf("you got 5 marks");
}
}


else if((c==2))
{
if((c==2)&&(f>2))
{
printf("you do not get grace marks");
}
else
{
printf("you got 4 marks");
}
}

else if((c==3))
{
if((c==3)&&(f>1))
{
printf("you do not get grace marks");
}
else
{
printf("you got 5 marks");
}
}

else 
{
printf("enter valid class max 3");
}
return 0;
}

