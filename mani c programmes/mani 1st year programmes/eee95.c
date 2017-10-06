#include<stdlib.h>
main()
{
int a[10],i;
clrscr();
for(i=0;i<10;i++)
{
scanf("%d",(a+i));
printf("%d",*(a+i));
}
getche();
}
