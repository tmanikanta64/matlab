#include<stdio.h>
#include<conio.h>
 main()
{
  int a, b;
  clrscr();
  printf("enter a");
  scanf("%d", &a);
  b=++a;
  printf("\nb=%d",b);
  b=--a;
  printf("\nb=%d",b);
}