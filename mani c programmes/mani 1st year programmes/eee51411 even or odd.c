#include<stdio.h>
#include<conio.h>
main()
{
int a;
clrscr();
printf("enter a value");
scanf("%d",&a);
if(a%2==0)
printf("a is even number");
else
printf("a is odd number");
getch();
}