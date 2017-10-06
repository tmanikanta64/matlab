#include<stdio.h>
#include<conio.h>
main()
{
int a,i=0,fact;
clrscr();
printf("enter a number");
scanf("%d",&a);
for(fact=1;a!=0;i++)
{
fact=fact*a;
a=a-1;
}
printf(" fact %d",fact);
getche();
}







