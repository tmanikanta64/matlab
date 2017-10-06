#include<stdio.h>
#include<conio.h>
main()
{
int a,b,ad,sub,mul;
float div;
clrscr();
printf("enter a,b values");
scanf("%d %d",&a,&b);
ad=a+b;
sub=a-b;
mul=a*b;
div=a/b;
printf("addition of a,b %d\n",ad);
printf("subtraction of a,b %d\n",sub);
printf("multiplication of a,b %d\n",mul);
printf("division of a,b %f",div);
getche();
}