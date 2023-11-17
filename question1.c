/*sakthi was playing we a toys of size of stress relief sakthi knows the length wide and heigth of the object.but he would like to know the surface area of the object.can you help him .
hint!:surface area of object =2*(width*length+length*height+height*width)*/
#include<stdio.h>
int main()
{
int w,l,h,c;
printf("Enter width");
scanf("%d",&w);
printf("Enter length");
scanf("%d",&l);
printf("Enter height");
scanf("%d",&h);
c=2*(w*l+l*h+h*w);
printf("surface area =%d",c);
return 0;
}

