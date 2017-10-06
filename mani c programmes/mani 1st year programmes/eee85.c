#include<stdio.h>
#include<conio.h>
void pow(void);
void main()
{
clrscr();
pow();
getche();
}



void pow()
{
int a,res=1,i;
printf("enter two values");
scanf("%d",&a);
for(i=0;i<5;i++)
res=res*a;
printf("\npow %d",res);
}

