#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
clrscr();
printf("enter a,b,c values");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
printf("a is maximum value");
else
if(b>c)
printf("b is maximum value");
else
printf("c is maximum value");
getch();
}