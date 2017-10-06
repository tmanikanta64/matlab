#include<stdio.h>
#include<conio.h>
main()
{
char ch;
clrscr();
printf("enter character");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
printf("character is vowel");
}
else
{
printf("character is consonant");
}
getche();
}


