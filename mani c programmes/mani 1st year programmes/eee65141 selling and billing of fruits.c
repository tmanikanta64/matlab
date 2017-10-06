#include<stdio.h>
#include<conio.h>
main()
{
int a,b,amt1=0,c,amt2=0,tb;
clrscr();
while(1)
{
printf("our menu is \n");
printf("code   fruits    price \n");
printf(" 1     apples      5 \n");
printf(" 2     bananas     3 \n");
printf(" 0    total bill \n\n\n");
printf("enter code");
scanf("%d",&a);
if(a==1)
{
printf("how many apples do you want");
scanf("%d",&b);
amt1=amt1+(5*b);
printf("cost of apples is %d\n",amt1);
}
else if(a==2)
{
printf("how many bananas you want");
scanf("%d",&c);
amt2=(3*c)+amt2;
printf("cost of bananas is %d\n",amt2);
}
else if(a==0)
{
tb=amt1+amt2;
printf("total bill %d\n",tb);
printf("Thank you for shopping");
getche();
exit(0);
}
}
getch();
}
