#include<stdlib.h>
main()
{
int n,i,a[100],sum=0,avg;
clrscr();
printf("enter n");
scanf("%d",&n);
randomize();
{
for(i=0;i<n;i++)
{
a[i]=random(100)+1;
sum=sum+a[i];
}
avg=sum/n;
printf("average %d",avg);
}
getche();
}

