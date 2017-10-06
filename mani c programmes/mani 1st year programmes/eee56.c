#include<stdio.h>
#include<conio.h>
main()
{
int rev=0,a;
clrscr();
printf("enter a value");
scanf("%d",&a);
while(a!=0)
{
rev=(rev*10)+(a%10);
a=a/10;
}
printf("reverse %d",rev);
getche();
}
