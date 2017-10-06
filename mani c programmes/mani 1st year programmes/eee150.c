#include <stdio.h>
#include<stdlib.h>
main()
{
int n,i;
float a[20];
clrscr();
printf("enter n value ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
int c,d;
c=random(30)+1;
d=random(5)+1;
a[i]=(float)c/d;
if(a[i]>=10.0 && a[i]<=20.0)
{
printf("%f\n",a[i]);
}
else
i=i-1;
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{





getche();
}

