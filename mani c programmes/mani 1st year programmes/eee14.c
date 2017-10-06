#include<stdio.h>
#include<conio.h>
main()
{
int a,b,ad,sub,mul;
float div;
char ch;
clrscr();
printf("enter a,b values");
scanf("%d %d",&a,&b);
printf("enter character");
scanf("%c",&ch);
if(ch=='+')
{
ad=a+b;
printf("add of a,b%d\n",ad);
}
if(ch=='-')
{
sub=a-b;
printf("sub of a,b%d\n",sub);
}
if(ch=='*')
{
mul=a*b;
printf("mul of a,b%d\n",mul);
}
if(ch=='/')
{
div=a/b;
printf("div of a,b%f\n",div);
}
else
{
printf("invalid operator");
}
getche();
}

