#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int i,n,x,res=1,f;
printf("enter n,x values");
scanf("%d %d",&n,&x);
for(i=1;i<=n;i++)
{
f=fact(i);
res=res+(pow(x,i)/f);
}
printf("the value of e^%d is %d ",x,res);
getche();
}

int fact(int q)
{
int r=1,i;
for(i=1;i<=q;i++)
r=r*i;
return(r);
}

