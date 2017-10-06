#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
clrscr();
printf("enter the values");
scanf("%d %d %d",&a,&b,&c);
if(a==1 || a==21 || a==31)
printf("%dst",a);
if(a==2 || a==22 )
printf("%dnd",a);
if(a==3 || a==23)
printf("%drd",a);
else
printf("%dth",a);
if(b==1)
{
printf("january");
}
if(b==2)
{
printf("febrauary");
}
if(b==3)
{
printf("march");
}
if(b==4)
{
printf("april");
}
if(b==5)
{
printf("may");
}
if(b==6)
{
printf("june");
}
if(b==7)
{

printf("july");
}
if(b==8)
{
printf("august");
}
if(b==9)
{
printf("september");
}
if(b==10)
{
printf("october");
}
if(b==11)
{
printf("november");
}
if(b==12)
{
printf("december");
}
printf("%d",c);
getch();
}

