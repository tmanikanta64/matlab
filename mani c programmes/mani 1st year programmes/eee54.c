#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int a,b,c,s,area,x1,x2,x3,y1,y2,y3,ba,he,p;
clrscr();
printf("case method\n");
printf("1    sides are given\n");
printf("2    co ordinates are given\n");
printf("3    base and ht given\n");
printf("enter case");
scanf("%d",&p);
switch(p)
{
case 1:
printf("enter 3 sides");
scanf("%d %d %d",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
break;
case 2:
printf("enter (x1,y1),(x2,y2),(x3,y3)");
scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
area=(float)1/2*((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)));
break;
case 3:
printf("enter base ,height");
scanf("%d %d",&ba,&he);
area=(float)1/2*(ba*he);
break;
default :
printf("un known");
break;
}
printf("%d",area);
getch();
}

