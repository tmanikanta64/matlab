#include<stdio.h>
#include<conio.h>
 main()
{
 int a, b, c, d;
 clrscr();
 printf("enter a, b, c");
 scanf("%d%d%d", &a, &b, &c);
 d=a>b&&a>c;
 printf("\nd=%d",d);
 d=b>a||b>c;
 printf("\nd=%d",d);
 }