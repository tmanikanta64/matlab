#include<stdio.h>
#include<conio.h>
main()
{
int a[5],t=0,av,i;
clrscr();
printf("enter five subjects");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
t=t+a[i];
}
av=t/5;
if(av >= 90)
printf("grade is A");
else if(av >= 80)
printf("grade is B");
else if(av >= 70)
printf("grade is c");
else if(av >= 40)
printf("grade is d");
else
printf("grade is f");
getch();
}

