#include<stdio.h>
#include<conio.h>
main()
{
int a,b;
printf("enter two values");
scanf("%d %d ",&a,&b);
swap(a,b);
printf("%d %d ",a,b);
getche();
}

swap(int x,int y)
{
int c;
c=x;
x=y;
y=c;
printf("\n in swap %d  %d",x,y);
}

