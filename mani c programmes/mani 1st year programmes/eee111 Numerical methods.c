#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
float a[2],b[2],x,f;
int i;
clrscr();
printf("\n enter the intervals ");
for(i=0;i<2;i++)
{
scanf("%f",&a[i]);
b[i]=pow(a[i],3)-25;
}
if(b[0]*b[1] >0)
{
printf("root doesn't lies between intervals");
}
else
{
i=0;
while(abs(b[1])>0.0001)
{
x=(a[0]+a[1])/2;
f=pow(x,3)-25;
i++;
if(f*b[0] <0)
{
a[1]=x;
b[1]=f;
printf("\n root lies bw %f & %f ",a[0],a[1]);
}
else
{
a[0]=x;
b[0]=f;
printf("\n root lies bw %f & %f",a[0],a[1]);
}
}
}
printf("\n root is %2.4f",a[1]);
getche();
}


