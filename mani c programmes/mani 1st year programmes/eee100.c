#include<stdio.h>
#include<conio.h>
#include<math.h>
struct triangle
{
int a,b,c;
float s,area;
}t;
main()
{
clrscr();
printf("enter 3 sides of a triangle");
scanf("%d %d %d",&t.a,&t.b,&t.c);
t.s=(t.a+t.b+t.c)/2;
t.area=sqrt(t.s*(t.s-t.a)*(t.s-t.b)*(t.s-t.c));
printf("area of triangle %f",t.area);
getche();
}