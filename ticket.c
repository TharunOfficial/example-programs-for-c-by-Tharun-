#include<stdio.h>
int main()
{
char m;
printf("Enter ticket code to check");
scanf("%c",&m);
if((m=='E')||(m=='e'))
{
printf("Early Bird Ticket");
}
else if((m=='D')||(m=='d'))
{
printf("Discount Ticket");
}
else if((m=='V')||(m=='v'))
{
printf("VIP Ticket");
}
else if((m=='S')||(m=='s'))
{
printf("Standard Ticket");
}
else if((m=='C')||(m=='c'))
{
printf("Child Ticket");
}
else 
{
printf("invalid ticket");
}
return 0;
}



