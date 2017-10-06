#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int a,b;
float c;
clrscr();
printf("enter a,b values");
scanf("%d %d",&a,&b);
c=(a*a)+(b*b)+sqrt(a*b);
printf("(a*a)+(b*b)+sqrt(a*b) is %f",c);
getche();
}