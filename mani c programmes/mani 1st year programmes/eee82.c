#include<stdio.h>
#include<conio.h>
void add(void);
void main()
{
clrscr();
add();
}



void add()
{
int a,b,c;
printf("enter two values");
scanf("%d %d",&a,&b);
c=a+b;
printf("\nsum %d",c);
}

