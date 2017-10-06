#include<stdlib.h>
main()
{
int n,i=0,a[100],sum=0,avg;
clrscr();
printf("enter n");
scanf("%d",&n);
randomize();
{
while(i<n)
{
a[i]=random(100)+1;
sum=sum+a[i];
i=i+1;
}
avg=sum/n;
printf("average %d",avg);
}
getche();
}

