#include<stdio.h>
#include<conio.h>
main()
{
int a,b;
clrscr();
printf("enter 2 values");
scanf("%d %d",&a,&b);
swap(&a,&b);
getche();
}


swap(int *p,int *q)
{
int c;
c=*p;
*p=*q;
*q=c;
printf("%d %d",*p,*q);
}

