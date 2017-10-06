#include<stdio.h>
#include<conio.h>
main()
{
int a,b,x,y,c;
clrscr();
printf("enter a,b,x,y values");
scanf("%d %d %d %d",&a,&b,&x,&y);
c=((a*x)+(b*y))/((a*x)-(b*y));
if(c==0)
printf("it has infinite solution");
else
printf("value of ((a*x)+(b*y))/((a*x)-(b*y)) %d",c);
getch();
}
