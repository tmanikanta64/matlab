#include<stdio.h>
#include<conio.h>
main()
{
int a,b,rev=0;
clrscr();
printf("enter a number");
scanf("%d",&a);
b=a;
while(a!=0)
{
rev=(rev*10)+(a%10);
a=a/10;
}
if(b==rev)
printf("palindrome");
else
printf("not palindrome");
getche();
}