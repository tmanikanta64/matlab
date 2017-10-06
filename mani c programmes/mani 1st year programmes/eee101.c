#include<stdio.h>
#include<conio.h>
main()
{
int a,i,b;
clrscr();
printf("enter a number");
scanf("%d",&a);
for(i=1;i<=10;i++)
{
b=a*i;
printf(" %d * %d = %d \n",a,i,b);
}
getche();
}

