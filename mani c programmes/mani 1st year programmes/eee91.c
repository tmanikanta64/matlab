#include<stdio.h>
#include<conio.h>
main()
{
char a,*p,b;
a='g';
p=&a;
*p='t';
printf("%c",a);
getche();
}
