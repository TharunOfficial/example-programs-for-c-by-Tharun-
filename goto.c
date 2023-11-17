#include<stdio.h>
int main()
{
int a,b;
scanf("%d",&a);
loop:
    printf("%d\n",a);
    a++;
    if(a<=10)
    {
     goto loop;
    }
return 0;
}
