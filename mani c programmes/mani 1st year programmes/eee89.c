#include<stdio.h>
#include<conio.h>
main()
{
int a=10,*p;
clrscr();
p=&a;
printf("address of a %u \n",p);
printf("add %u ",&a);
getche();
}
