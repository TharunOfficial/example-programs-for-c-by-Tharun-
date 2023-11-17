#include<stdio.h>
int main()
{
int n[3],i;
char s[3];
printf("Enter 3card type and number");
for(i=0;i<3;i++)
{
scanf("%s %d",&s[i],&n[i]);
}
if((s[0]==s[1])&&(s[1]==s[2])&&(n[0]==n[1])&&(n[1]==n[2]))
{
printf("Double Bonanza");
}
else if(((s[0]==s[1])&&(s[1]==s[2]))||((n[0]==n[1])&&(n[1]==n[2])))
{
printf("Bonanza");
}
else
{
printf("No Bonanza");
}
return 0;
}
