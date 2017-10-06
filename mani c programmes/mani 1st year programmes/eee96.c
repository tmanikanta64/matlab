#include<stdlib.h>
main()
{
int i,a,j=0,g,sum=0,b,r;
clrscr();
printf("enter 1 convert binary to decimal \n       2 convert decimal to binary");
scanf("%d",&i);
switch(i)
{
case 1:
printf("enter binary ");
scanf("%d",&a);
b=a;
for(j=0;a!=0;j++)
{
a=a/10;
}
for(g=0;g<=j;g++)
{
r=b%10;
sum=sum+(r*pow(2,




break;
}
}
