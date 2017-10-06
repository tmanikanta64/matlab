#include<stdio.h>
#include<conio.h>
main()
{
char ch;
int a,b,ad,sub,mul;
float div;
clrscr();
printf("enter a,b values");
scanf("%d %d",&a,&b);
printf("enter character\n");
scanf("%c",&ch);
if(ch=='+')
{
ad=a+b;
printf("add of a,b%d\n",ad);
}
else if(ch=='-')
{
sub=a-b;
printf("sub of a,b%d\n",sub);
}
else if(ch=='*')
{
mul=a*b;
printf("mul of a,b%d\n",mul);
}
else if(ch=='/')
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