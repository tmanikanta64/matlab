#include<stdio.h>
#include<conio.h>
main()
{
int a,b;
clrscr();
printf("enter a,b values");
scanf("%d %d",&a,&b);
if(a>b)
{
printf("a is greater ");
}
if(b>a)
{
printf("b is greater");
}
else
{
printf("a is equal to b");
}
getche();
}