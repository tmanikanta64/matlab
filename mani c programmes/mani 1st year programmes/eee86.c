#include<stdio.h>
#include<conio.h>
void add(int,int);
void main()
{
int a,b;
clrscr();
printf("enter two numbers");
scanf("%d %d",&a,&b);
add(a,b);
}



void add(int x,int y)
{
int c=x+y;
printf("\nsum %d",c);
}

