#include<stdio.h>
#include<conio.h>
main()
{
int a,i,b,c=0;
clrscr();
printf("enter a number");
scanf("%d",&a);
for(i=2;i<=a/2;i++)
{
b=a%i;
if(b==0)
{
c=1;
printf("\n it is not prime");
exit(0);
}
}
if(c==0)
printf("a is prime");
getch();
}

