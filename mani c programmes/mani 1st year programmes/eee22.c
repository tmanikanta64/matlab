#include<stdio.h>
#include<conio.h>
main()
{
int a,b;
clrscr();
printf("enter a,b values");
scanf("%d %d",&a,&b);
b=b-a;
a=a+b;
b=a-b;
printf("a value is %d\n",a);
printf("b value is %d",b);
getch();
}

