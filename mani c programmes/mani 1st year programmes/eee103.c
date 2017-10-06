#include<stdio.h>
#include<conio.h>
main()
{
int x1,x2,x3,y1,y2,y3,area;
clrscr();
printf("enter coordinates(x1,y1),(x2,y2),(x3,y3)");
scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
area=(float)1/2*((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)));
printf("coordinates (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x2,y2,x3,y3);
printf("area %d",area);
getche();
}

