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
a[i]=random(30)/2;
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
if(a[i]>a[j])
{
s=a[i];
a[i]=a[j];
a[j]=s;
}
}
}
for(i=0;i<n;i++)
{
printf(





getche();
}

