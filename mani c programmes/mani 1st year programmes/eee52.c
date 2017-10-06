#include<stdio.h>
#include<conio.h>
main()
{
int a,i,b;
clrscr();
printf("enter a number");
scanf("%d",&a);
for(i=1;i<a/2;i++)
{
b=a%i;
if(b!=0)
{
printf("a is not prime");
exit(0);
}
}
printf("a is prime");
getch();
}

