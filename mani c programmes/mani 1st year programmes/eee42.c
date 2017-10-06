#include<stdio.h>
#include<conio.h>
main()
{
int p,t,r;
float si;
clrscr();
printf("enter principle value");
scanf("%d",&p);
printf("enter time");
scanf("%d",&t);
printf("enter rate");
scanf("%d",&r);
si=(p*t*r)/100;
printf("simple intrest %f",si);
getch();
}
