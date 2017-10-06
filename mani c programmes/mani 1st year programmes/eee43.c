#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int a,b,c,p,q;
clrscr();
printf("enter a,b,c values");
scanf("%d %d %d",&a,&b,&c);
p=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
q=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
printf("roots are %d\n%d",p,q);
getch();
}