#include<stdio.h>
#include<conio.h>
void sub(void);
void main()
{
clrscr();
sub();
}



void sub()
{
int a,b,c;
printf("enter two values");
scanf("%d %d",&a,&b);
c=a-b;
printf("\nsub %d",c);
}

