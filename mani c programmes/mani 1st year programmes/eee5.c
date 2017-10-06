#include<stdio.h>
#include<conio.h>
 main()
{
 int a, b, c;
 clrscr();
 printf("enter a,b");
 scanf("%d %d",&a, &b);
 c=(a>b);
 printf("\n%d", c);
 c=(a<b);
 printf("\n%d", c);
 c=(a<=b);
 printf("\n%d", c);
 c=(a>=b);
 printf("\n%d", c);
 c=(a!=b);
 printf("\n%d", c);
 c=(a==b);
 printf("\n%d", c);
}